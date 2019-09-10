/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190905
 * Desc: This program uses a for loop to calculate factorial
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <array>

int main() {
	const int n = 100;

	std::array<long double, n> factorials;
	//factorials of 0, and 1 are always 1
	factorials[0] = factorials[1] = 1LL;

	for ( int i = 2; i <= n; i++ ) 
		factorials[i] = factorials[i-1]*i;

	for ( int i = 0; i <= n; i++)	
		std::cout << i << "!= " << factorials[i] << std::endl;

	return 0;
}

