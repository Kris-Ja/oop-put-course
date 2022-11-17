#include<iostream>

class Student{
	public:
		std::string name;
};

class Notebook{
	public:
		std::string text;
		std::string read(){
			return text;
		}
		void write_name(Student student){
			text=student.name;
			return;
		}
};

int main(){
	Notebook notebook;
	Student student;
	student.name="Krzysztof";
	notebook.write_name(student);
	std::cout<<notebook.read();
	return 0;
}
