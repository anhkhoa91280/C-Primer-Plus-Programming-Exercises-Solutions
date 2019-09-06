/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190906
 * Desc: This program shows pre and post increment/decrement
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int a = 10;
	int b = 20;

	std::cout << "a = " << a << ", ++a = " << ++a << std::endl;
	std::cout << "Now, a = " << a << std::endl;

	std::cout << "b = " << b << ", b++ = " << b++ << std::endl;
	std::cout << "Now, b = " << b << std::endl;
		
	return 0;
}
