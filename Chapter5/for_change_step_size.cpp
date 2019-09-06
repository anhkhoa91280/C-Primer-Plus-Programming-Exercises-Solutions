/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190905
 * Desc: This program shows that you can change step size of a for loop in C++
 * 	instead of using just 1 
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int step;
	std::cout << "Enter step: ";
	std::cin >> step;

	for ( int i = 0; i < 100; i += step )
		std::cout << i << std::endl;

	return 0;
}
