/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190920
 * Desc: This program reads input characters from the keyboard until @ character, 
 * 	displays again to screen excepting number, meanwile converting uppercase to
 * 	lower case and vice versa.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <cctype>

int main() {
	char c;

	std::cout << "Enter some text, terminate with @: ";

	while ( std::cin.get(c) && c != '@' ) {
		if ( isdigit(c) )
			continue;
		if ( islower(c) )
			c = toupper(c);
		else 
			c = tolower(c);
		std::cout << c;
	}

	std::cout << "\nPROGRAM ENDS\n";

	return 0;
}
