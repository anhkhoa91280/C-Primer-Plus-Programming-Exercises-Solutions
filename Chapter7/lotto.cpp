/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190923
 * Desc: This program calculates lottery chances based on number range and number 
 * 	of selection.
 * Reference: C++ Primer Plus - 6th Edition	
 * */
#include <iostream>

long double probability( double choices, double picks );
int main() {
	double choices, picks;
	long double r;

	std::cout << "Enter number of choices on the game card and the number of "
		"picks allowed: " << std::endl;
	while ( std::cin >> choices >> picks 
			&& choices > 0 && picks > 0 && choices >= picks) {
		r = probability(choices, picks);
		std::cout << "You have 1 chance in " << r << " of winning." << std::endl;
		std::cout << "Next 2 numbers, or q to quit: ";
	}
	return 0;
}
long double probability( double choices, double picks ) {
	double c, p;
	long double r = 1.0;
	for ( c=choices, p=picks; p > 0; --c,--p )
		r *= c/p;
	return r;
}
