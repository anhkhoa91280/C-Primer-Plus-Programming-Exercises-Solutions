/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190921
 * Desc: This program list Benevolent Order of Programmers (BOP)
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

const int BOP_NUM = 5;
const int SIZE = 50;
struct BOP {
	char fullname[SIZE];
	char title[SIZE];
	char bopname[SIZE];
	int preference;
};
void show_menu();
void show_fullname( BOP bops[] );
void show_title( BOP bops[] );
void show_bopname( BOP bops[] );
void show_preference( BOP bops[] );
int main() {
	BOP bops[BOP_NUM] = {
		{ "Bjarne Stroustrup", "Creator", "CPPKREATOR", 2 },
		{ "Stephen Prata", "Writer", "CPPWRITER", 1 },
		{ "Scott Myers", "Contributor", "EFFECTIVE", 0 },
		{ "Bill Gate", "Founder", "MICROSOFT", 2 },
		{ "Mark Zuckerberg", "CEO", "FACEBOOK", 1 }
	};
	char c;

	std::cout << "Benevolent Order of Programmers Report." << std::endl;
	show_menu();
	std::cout << "Enter your choice:";
	
	while ( std::cin.get(c) ) {
		if ( 'q' == c ) {
			std::cout << "Bye!" << std::endl;
			break;
		}
		switch (c) {
			case 'a':
				show_fullname(bops);
				break;
			case 'b':
				show_title(bops);
				break;
			case 'c': 
				show_bopname(bops);
				break;
			case 'd':
				show_preference(bops);
				break;
			default:
				std::cout << "Wrong choice, try again!" << std::endl;
				break;
		}
		std::cin.get();
		std::cout << "\nNext choice: ";
	}

	return 0;
}
void show_menu() {
	std::cout << "a) display by name\tb) display by title\n";
	std::cout << "c) display by bopname\td) display by preference\n";
	std::cout << "q) quit\n";
}
void show_fullname( BOP bops[] ) {
	for ( int i=0; i<BOP_NUM; ++i )
		std::cout << bops[i].fullname << std::endl;
}
void show_title( BOP bops[] ) {
	for ( int i=0; i<BOP_NUM; ++i )
		std::cout << bops[i].title << std::endl;
}
void show_bopname( BOP bops[] ) {
	for ( int i=0; i<BOP_NUM; ++i )
		std::cout << bops[i].bopname << std::endl;
}
void show_preference( BOP bops[] ) {
	for ( int i=0; i<BOP_NUM; ++i ) {
		switch ( bops[i].preference ) {
			case 0:
				std::cout << bops[i].fullname << std::endl;
				break;
			case 1:
				std::cout << bops[i].title << std::endl;
				break;
			case 2:
				std::cout << bops[i].bopname << std::endl;
				break;
			default:
				std::cout << "Wrong preference, check your input data!" 
					<< std::endl;
				break;
		}
	}
}
