#include<iostream>


class Creators{
	public:
		
	private:
		std::string director;
		std::string music;
		std::string screenplay;
		std::string producer;
}

class People{
	public:
		
	private:
		std::vector <std::string> cast;
		Creators creators;
}

class Date{
	public:
		std::string date(){
			return std::to_string(day) + '.' + std::to_string(month) + '.' + std::to_string(year);
		}	
	private:
		int day,month,year;
}

class Title{
	public:
		std::string title(void){
			return original;
		}
		std::string title(std::string language){
			if(language.substr(0,2) == "en") return english;
			if(language.substr(0,2) == "pl" || language.substr(0,3) == "pol") return polish;
			if(language[0] == 'g') return german;
			return original;
		}
	private:
		std::string original;
		std::string english;
		std::string polish;
		std::string german;	
}

class Movie{
	public:
		Movie(std::string title, int release_year, std::string production_country, std::string language){
			this.title=title;
			this.production_country=production.country;
			//nie zdazylem dokonczyc
		
		}
	private:
		Title title;
		Date release_date;
		People people;
		std::string language;
		std::string production_country;
}

int main(){
	return 0;
}
