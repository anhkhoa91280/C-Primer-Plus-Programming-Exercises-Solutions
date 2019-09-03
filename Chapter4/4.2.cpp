/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190903
 * Desc: Exercise 4.2
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main()
{
	std::string name;
	std::string dessert;

	std::cout << "Enter your name:\n";
	getline(std::cin, name);
	std::cout << "Enter your favorite dessert:\n";
	getline(std::cin, dessert);
	std::cout << "I have some delicious " << dessert;
	std::cout << " for you, " << name << ".\n";
	return 0;
}
