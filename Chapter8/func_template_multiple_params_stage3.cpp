/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191020
 * Desc: This program shows function template with multiple params in stage 3 where
 * var is of the same type as parenthesized identifier.
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>

int main() {
	double a = 5.5;
	decltype((a)) b = a; 
	
	std::cout << "b = " << b << std::endl;
   	double c = 6.6; //assignment
	b = c;
	std::cout << "b = " << b << std::endl;
	std::cout << "a = " << a << std::endl;
	c = 7.7;
	std::cout << "After c changes:" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	return 0;
}
