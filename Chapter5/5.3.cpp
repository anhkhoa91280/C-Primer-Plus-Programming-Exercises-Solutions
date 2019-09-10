/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190910
 * Desc: This program calculates sum of numbers as entered from keyboard.
 * Reference: C++ Primer Plus - 6th
 * */
#include <iostream>

int main () {
	int n, sum = 0;

	do {
		std::cout << "Enter a number: ";
		std::cin >> n;
		sum += n;
		std::cout << "Sum = " << sum << std::endl;	
	} while ( n != 0);

	return 0;
}
