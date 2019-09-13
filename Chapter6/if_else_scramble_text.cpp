/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190913
 * Desc: This program scrambles text input from the user excepting spaces
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main () {
	char c;

	std::cout << "Enter some text: ";
	std::cin.get(c);

	while ( c != '.' ) {
		if ( c != ' ' ) 
			std::cout << ++c;
		else
			std::cout << c;
		std::cin.get(c);
	}
	std::cout << std::endl;

	return 0;
}
