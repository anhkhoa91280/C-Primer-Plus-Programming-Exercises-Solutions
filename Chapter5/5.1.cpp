/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190910
 * Desc: This program calculates sum of all integers between 2 numbers inclusively
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int min, max, sum = 0;
	
	std::cout << "Enter min number: ";
	std::cin >> min;

	std::cout << "Enter max number: ";
	std::cin >> max;

	for ( int i = min; i <= max; ++i )
		sum += i;

	std::cout << "Sum of all integers b/w " << min << " and " << max 
		<< " inclusively = " << sum << std::endl;

	return 0;
}
