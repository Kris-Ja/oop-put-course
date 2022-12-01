#include<iostream>

class NumberUtils{
	private:
		int a,b;
	public:
		int max(){
			return a>b?a:b;
		}
		int min(){
			return a<b?a:b;
		}
		int avg(){
			return (a+b)/2;
		}
		NumberUtils(int a, int b){
			this->a=a;
			this->b=b;
		}
};

int main(){
	int a=3,b=7;
	std::cout<<"max(3,7) = "<<NumberUtils(3,7).max()<<"\nmin(3,7) = "<<NumberUtils(3,7).min()<<"\navg(3,7) = "<<NumberUtils(3,7).avg()<<"\n";
}
		
