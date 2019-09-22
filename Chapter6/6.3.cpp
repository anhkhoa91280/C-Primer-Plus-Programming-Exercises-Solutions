/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190920
 * Desc: This program displays a menu with 4 choices, then responds to user with 
 * 	appropriate actions accordingly to user's selection.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

void menu();
int main() {
	char c;
	menu();

	while ( std::cin >> c ) {
		if ( 'q'==c) {
			std::cout << "Quitting program..." << std::endl;
			break;
		}
		switch(c) {
			case 'c':
				std::cout << "Tigers are carnivourous animal" << std::endl;
				break;
			case 'p':
				std::cout << "The Pianist is a famous movie" << std::endl;
				break;
			case 't': 		
				std::cout << "An oak is a tree" << std::endl;
				break;
			case 'g':
				std::cout << "Dota is a computer game" << std::endl;
				break;
			default:
				std::cout << "Please enter a character from the menu." << std::endl;
			 	break;	
		}
		menu();
	}
	return 0;
}
void menu() {
	std::cout << "\nEnter one of the following choices: " << std::endl;
	std::cout << "c) carnivor\t\tp) pianist" << std::endl;
	std::cout << "t) tree\t\t\tg) game" << std::endl;
	std::cout << "q) quit" << std::endl;
}
