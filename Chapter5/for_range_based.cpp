/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190908
 * Desc: This program shows range-based for loop in C++
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };

	//you have to reference the element if you want to modify it
	for ( int &x : arr ) {
		x *= 10;
		std::cout << x << std::endl;
	}

	//you can also initialize list in a range_based for loop
	for ( float x : {1.1, 2.2, 3.3} )
		std::cout << x << std::endl;
		
	return 0;
}
