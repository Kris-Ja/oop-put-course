#include<iostream>

class NumericalRelations{
	private:
		int a,b;
	public:
		int max(){
			return a>b?a:b;
		}
		int min(){
			return a<b?a:b;
		}
		float avg(){
			return (a+b)/(float)2;
		}
		NumericalRelations(int a, int b){
			this->a=a;
			this->b=b;
		}
};

int main(){
	int a=3,b=7;
	std::cout<<"max(3,7) = "<<NumericalRelations(3,7).max()<<"\nmin(3,7) = "<<NumericalRelations(3,7).min()<<"\navg(3,7) = "<<NumericalRelations(3,7).avg()<<"\n";
}
		
