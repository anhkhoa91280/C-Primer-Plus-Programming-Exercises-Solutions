/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190907
 * Desc: This program shows a while loop in C++
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int i = -1;
	std::string name;

	std::cout << "Enter your name: ";
	getline(std::cin, name);

	std::cout << "Hello " << name << ", here's your name vertically and "
		<< "ASCIIized" << std::endl;	
	while ( name[++i] ) 
		std::cout << name[i] << ": " << static_cast<int>(name[i]) << std::endl;

	return 0;
}
