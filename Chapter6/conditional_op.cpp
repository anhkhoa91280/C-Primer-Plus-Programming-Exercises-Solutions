/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190917
 * Desc: This program shows conditional operator ? : to get max values b/w 2 
 * 	numbers 
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int a, b, c;

	std::cout << "Enter a: ";
	std::cin >> a;
	
	std::cout << "Enter b: ";
	std::cin >> b;

	c = a > b ? a : b;

	std::cout << "Maximum value is: " << c << std::endl;

	return 0;
}
