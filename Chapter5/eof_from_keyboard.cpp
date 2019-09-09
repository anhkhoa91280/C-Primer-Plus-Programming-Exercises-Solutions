/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190909
 * Desc: This program shows how to catch eof from keyboard. 
 * 	There are many variations to do this action
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	char c;

	std::cout << "Enter some characters plz: ";

	//std::cin.get(c);
	//while ( std::cin.fail() == false ) {
	/*while ( std::cin.eof() == false ) {
		std::cout << c;
		std::cin.get(c);
	}*/
	//OR
	std::cin.get(c);
	while ( c != EOF ) {
		std::cout.put(c);
		std::cin.get(c);
	}
	//OR
	//std::cin.get(c);
	/*do {
		std::cout << c;
	} while ( std::cin.get(c) );*/

	//OR
	/*while ( std::cin.get(c) )
		std::cout << c;*/

	return 0;
}
