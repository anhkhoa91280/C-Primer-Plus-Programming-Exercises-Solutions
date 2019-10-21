/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191021
 * Desc: 
 * The CandyBar structure contains three members.The first member holds the brand
name of a candy bar.The second member holds the weight (which may have a fractional part) of the candy bar, and the third member holds the number of calories
(an integer value) in the candy bar.Write a program that uses a function that takes
as arguments a reference to CandyBar, a pointer-to-char, a double, and an int and
uses the last three values to set the corresponding members of the structure.The last
three arguments should have default values of “Millennium Munch,” 2.85, and 350.
Also the program should use a function that takes a reference to a CandyBar as an
argument and displays the contents of the structure. Use const where appropriate.

	Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream> 

struct CandyBar {
	char * name;
	float weight;
	int calories;
};
void make_candy(CandyBar &, char * name = "Millennium Munch", float w = 2.85, 
		int c = 350);
void display(const CandyBar & bar);

const int LEN = 50;
int main() {
	char * name = new char[LEN];
	float weight;
	int calories;
	
	std::cout << "Default bar: " <<  std::endl;
	CandyBar cb;
	make_candy(cb);
	display(cb);
	
	std::cout << "\nMake your own bar: " << std::endl;
	std::cout << "Enter name: ";
	std::cin.getline(name, LEN);
	std::cout << "Enter weight: ";
	std::cin >> weight;
	std::cout << "Enter calories: ";
	std::cin >> calories;
	make_candy(cb, name, weight, calories);
	display(cb);

	return 0;
}

void make_candy(CandyBar & bar, char * name, float w, int c) {
	bar.name = new char[LEN];
	strcpy(bar.name, name);
	bar.weight = w;
	bar.calories = c;
}
void display(const CandyBar & bar) {
	std::cout << "Name: " << bar.name << std::endl;
	std::cout << "Weight: " << bar.weight << std::endl;
	std::cout << "Calories: " << bar.calories << std::endl;
}
