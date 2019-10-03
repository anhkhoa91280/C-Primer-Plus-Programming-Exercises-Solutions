/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191003
 * Desc: This program calculate factorials using recursive function
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int factorial(int n);
int main() {
	int n;

	std::cout << "Enter a number (a negative number or a character to quit): ";
	while ( std::cin >> n && n>0 ) {
		std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl; 
		std::cout << "Another number: ";
	}
	
	return 0;
}
int factorial(int n) {
	if ( 0==n )
		return 1;
	return n*factorial(n-1);
}
