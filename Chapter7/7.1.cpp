/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191002
 * Desc: This program calculates harmonic mean of each pair of numbers entered by 
 * 	the user.
 * Reference: C++ Primer Plus - 6th Edition	
 * */
#include <iostream>

double harmonic_mean(int x, int y);
int main() {
	int x,y;
	std::cout.precision(2);
	std::cout << "Enter a pair of numbers, 0 to quit: ";
	while ( std::cin >> x >> y && ( x!= 0 && y != 0) ) {
		std::cout << harmonic_mean(x, y) << std::endl;
		std::cout << "Enter another pair, or 0 to quit: ";
	} 
	std::cout << "Program terminating..." << std::endl;
	return 0;
}
double harmonic_mean(int x, int y) {
	return 2.0*x*y/(x+y);
}
