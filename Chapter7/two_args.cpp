/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190922
 * Desc: This program shows how to prototype and define functions with more than
 * 	1 argument.
 * Reference: C++ Primer Plus - 6th Edition	
 * */
#include <iostream>

void n_char(int n, char c);
int main() {
	char c;
	int n;

	std::cout << "Enter q to quit the program." << std::endl;
	std::cout << "Enter a character: ";
	std::cin >> c;
	//std::cin.get();

	while ( c!='q' && c!='Q' ) {
		std::cout << "Enter a number: ";
		std::cin >> n;
		
		n_char(n, c);

		std::cout << "Another character: ";
		std::cin >> c;
	}

	return 0;
}
void n_char(int n, char c) {
	for ( int i=0; i<n; ++i )
		std::cout << c;
	std::cout << std::endl;
}
