#include<iostream>
#include<string>

class Number{
	public:
		virtual std::string value()=0;
};

class Integer: public Number{
	private:
		int amount;
	public:
		Integer add_int(int summand){
			return Integer(amount + summand);
		}
		std::string value(){
			return std::to_string(amount);
		}
		Integer(int amount){
			this->amount=amount;
		}
};

int main(){
Integer first(100);
Integer second = first.add_int(10);
std::cout << "100 + 10 = " + second.value() + "\n";
return 0;
}
