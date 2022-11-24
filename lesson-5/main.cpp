#include <iostream>
#include <string>
#include <map>

class FakeCantor {
	private:
		std::map<std::string, float> rates{{"USD", 1.0366f},
			{"GBP", 0.87063f},
			{"CHF", 0.9881f},
			{"JPY", 145.12f}};
	public:
		FakeCantor() = default;
		float EuroToRate(const std::string &currency) {
			return rates[currency];
		};
};

class Currency {
	public:
		virtual Currency *AddedCurrency(float value, std::string currency) = 0;
		virtual Currency *SubtractedCurrency(float value, std::string currency) = 0;
		virtual std::string Abbreviation() = 0;
		virtual std::string Symbol() = 0;
		virtual std::string Balance() = 0;
		virtual float DollarExchangeRate() = 0;
};

class Euro : public Currency {
	private:
		float amount;
		FakeCantor cantor;
	public:
		std::string Balance(){
			return std::to_string(amount);
		}
		std::string Abbreviation(){
			return "EUR";
		}
		std::string Symbol(){
			return "€";
		}

		Euro *AddedCurrency(float value, std::string currency){
			if(currency == "EUR"){
				Euro* r = new Euro(amount + value);
				return r;
			}
			else{
				Euro* r = new Euro(amount + value/cantor.EuroToRate(currency));
				return r;
			}
		}

		Euro *SubstractedCurrency(float value, std::string currency){
			if(currency == "EUR"){
				Euro* r = new Euro(amount - value);
				return r;		
			}else{
				Euro* r = new Euro(amount - value/cantor.EuroToRate(currency));
				return r;
			}
		}

		Euro(float value){
			this->amount = value;
		}
};

int main() {
	Euro first(100);
	std::cout<<first.AddedCurrency(10,"USD")->Balance()<<"\n";
	return 0;
}
