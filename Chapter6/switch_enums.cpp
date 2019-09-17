/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190917
 * Desc: This program show switch with enums
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
enum { dota1, dota2, aoe, ih, coc, candy };
int main() {
	int choice;

	std::cout << "Enter your choice from 0-5, 6 to quit: ";
	std::cin >> choice;

	while ( choice != 6 ) {
		switch ( choice ) {
			case dota1:
			case dota2:
			case aoe:
				std::cout << "PC games" << std::endl;
				break;
			case ih:
			case coc:
			case candy:
				std::cout << "Mobile games" << std::endl;
				break;
			default:
				std::cout << "Not a correct choice" << std::endl;
				break;
		}

		std::cout << "Enter your choice from 0-5, 6 to quit: ";
		std::cin >> choice;
	}
	return 0;
}
