/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190913
 * Desc: This program calculate number of spaces from user input text
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main () {
	char c;
	int cnt = 0;

	std::cout << "Enter some text: ";
	std::cin.get(c);

	while ( c != '.' ) {
		if ( c == ' ' ) 
			++cnt;
		std::cin.get(c); 
	}

	std::cout << "Number of spaces: " << cnt << std::endl;

	return 0;
}
