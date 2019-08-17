/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190817
 * Desc: This program shows reading C-style string using get()
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

int main() {
	const int SIZE = 25;
	char name[SIZE];
	char bike[SIZE];

	/*
	std::cout << "Enter your name: ";
	//std::cin.get(name, SIZE);
	//By ommitting the following line, get() will leave the '\n' character in the 
	//input queue. So when you attempt to read another string, get() will read 
	//'\n' and conclude that there's nothing more to read.
	std::cin.get();
	*/

	//Another approach is to concatenate another get() like the following
	std::cout << "Enter your name: ";
	std::cin.get(name, SIZE).get();

	std::cout << "Enter your favourite bike: ";
	std::cin.get(bike, SIZE);

	std::cout << "Hi, " << name << ". We have a list of " << bike 
		<< " bikes for you to choose from" << std::endl;

	return 0;
}
