#include<iostream>
#include<cassert>

class Game
{
	public:
	   	int result();
};

class FakeFootballGame : Game
{
	public:
	   	int result(){
			return 3;
		}
};

int main(){
	FakeFootballGame *game = new FakeFootballGame;
	assert (game->result()==3);
	assert (game->result()==1);
	std::cout<<"After assert.\n";
	return 0;
}
