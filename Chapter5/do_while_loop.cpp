/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190908
 * Desc: This program shows a do-while loop, used when a statement needs to be 
 * 	executed at least once
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int n;

	std::cout << R"+*(Enter a number between 1-10 
to guess my favourite number: )+*";
	std::cin >> n;

	do {
		std::cout << "Not right" << std::endl;
		std::cout << "Give it another try: ";
		std::cin >> n;
	} while( n != 7 );
	std::cout << "Your guess's right, 7's my favourite number" << std::endl;

	return 0;
}
