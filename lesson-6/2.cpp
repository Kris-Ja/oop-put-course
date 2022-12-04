#include<iostream>
#include<cmath>
#include<string>

class Number{
	public:
		virtual double doubleValue()=0;
};

class Logarithm : public Number{
	private:
		double base, argument;
	public:
		double doubleValue(){
			return log(this->argument) / log(this->base);
		}
		Logarithm(double base, double argument){
			if(base<=0 || base==1)
				throw "Wrong base of logarithm - " + std::to_string(base);
			if(argument<=0)
				throw "Wrong argument of logarithm - " + std::to_string(argument);
			this->base=base;
			this->argument=argument;
		}
};



int main(){
	double base1=2, argument1=8;
	try{
		Logarithm log1 = Logarithm(base1, argument1);
		std::cout<<"Logarithm of 8 to the base 2 is "<<log1.doubleValue()<<"\n";
	}catch(std::string msg){
		std::cout<<"Error: "<<msg<<"\n";
	}

	double base2=-1, argument2=8;
	try{
		Logarithm log2 = Logarithm(base2, argument2);
		std::cout<<"Logarithm of 8 to the base -1 is "<<log2.doubleValue()<<"\n";
	}catch(std::string msg){
		std::cout<<"Error: "<<msg<<"\n";
	}
}	
