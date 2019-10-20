/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191020
 * Desc: This program shows function template with multiple params in stage 1 where
 * var is of the same type as the unparenthesized indentifier.
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>

int main() {
	double a = 5.5;
	double & ra = a;
	double * c = &a;

	decltype(a) b = 6.5;	//b is a double
	decltype(ra) rb = b;	//rb is a double &
	decltype(c) d = &b;		//d is a double *

	std::cout << "b = " << b << ", size: " << sizeof(b) << std::endl;
	std::cout << "rb = " << rb << ", size: " << sizeof(rb) << std::endl;
	std::cout << "d = " << *d << ", size: " << sizeof(d) << std::endl;

	return 0;
}
