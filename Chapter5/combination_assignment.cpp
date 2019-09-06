/*
 * Name: Dang Nguyen Anh Khoa	
 * Date: 20190906
 * Desc: This program shows Combination assignment operator
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int k = 5;

	k += 3;
	std::cout << "k = " << k << std::endl;

	int *pa = new int[10];
	pa[4] = 12;
	pa[4] += 6; // ok, pa[4] set to 18
	std::cout << "pa[4] = " << pa[4] << std::endl;

	*(pa + 4) += 7; // ok, pa[4] set to 25
	std::cout << "pa[4] = " << pa[4] << std::endl;

	pa += 2; // ok, pa points to the former pa[2]	
	std::cout << "pa[2] = " << pa[2] << std::endl;

	return 0;
}
