#include<iostream>

class Pants{
	public:
		std::string material;
		int length, weight, cost;
		Pants(int length=150, std::string material="cotton"){
			this->length=length;
			this->material=material;
		}
		Pants(double lenght, std::string material){
			this->length=(int)length;
			this->material=material;
		}
		Pants(const Pants& original){
			this->length=*original.length;
		}
};



int main(){
	Pants first(100,"wool");
	Pants second(&first);
	std::cout<<second.length;
	return 0;
}
