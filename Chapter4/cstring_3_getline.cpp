/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190817
 * Desc: This program shows reading C-style string using getlineline()
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

int main() {
	const int SIZE = 25;
	char name[SIZE];
	char bike[SIZE];

	//getline() replaces '\n' character with '\0' character so the new getline() 
	//call will read another string as normal
	std::cout << "Enter your name: ";
	std::cin.getline(name, SIZE);

	std::cout << "Enter your favourite bike: ";
	std::cin.getline(bike, SIZE);

	std::cout << "Hi, " << name << ". We have a list of " << bike 
		<< " bikes for you to choose from" << std::endl;

	return 0;
}
