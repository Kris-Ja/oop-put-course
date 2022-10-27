#include<iostream>

class TissueBox{
	public:
		TissueBox(int number=100){
			this->number=number;
		}
		TissueBox(double number){
			this->number=(int)number;
		}
		int Number(void){
			return this->number;
		}
		void TakeTissue(void){
			this->number--;
		}	
	private:
		int number,box_size;
};

int main(){
	TissueBox box;
	std::cout<<box.Number()<<"\n";
	box.TakeTissue();
	std::cout<<box.Number();	
	return 0;
}
