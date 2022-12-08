#include<iostream>
#include<string>

class Elf{
	private:
		int amount_of_food;
	public:
		Elf(int amount){
			this->amount_of_food=amount;
		}
		int foodCarried(){
			return amount_of_food;
		}
		void giveFood(int amount){
			this->amount_of_food+=amount;
		}
};

int main(){
	std::string line;
	Elf *elf_with_most_food, *elf;

	std::getline(std::cin, line);
	elf_with_most_food = new Elf(std::stoi(line));
	while(!std::cin.eof()){
		std::getline(std::cin, line);
		if(line[0]=='\n')break;
		elf_with_most_food->giveFood(std::stoi(line));
	}

	while(!std::cin.eof()){
		elf=new Elf(0);
		while(!std::cin.eof()){
			std::getline(std::cin, line);
			if(line[0]=='\n' || std::cin.eof())break;
			elf->giveFood(std::stoi(line));
		}
		if(elf->foodCarried() > elf_with_most_food->foodCarried()){
			delete[] elf_with_most_food;
			elf_with_most_food=elf;
		}
	}

	std::cout<<elf_with_most_food->foodCarried();
}
