/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190915
 * Desc: This program shows logical NOT operator
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <climits>

bool is_int( double n );
int main () {
	double n;
	std::cout << "Enter an integer: ";
	std::cin >> n;
	while ( !is_int(n) ) {
		std::cout << "Out of range of an integer. Try again: ";
		std::cin >> n;
	}
	std::cout << "You've entered an integer with the value: " << n << std::endl;

	return 0;
}
bool is_int( double n ) {
	if ( n <= INT_MAX && n >= INT_MIN )
		return true;
	else 
		return false;
}
