/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190909
 * Desc: This program shows how to catch eof from keyboard
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	char c;

	std::cout << "Enter some characters plz: ";
	std::cin.get(c);

	while ( std::cin.fail() == false ) {
		std::cout << c;
		std::cin.get(c);
	}

	return 0;
}
