/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190904
 * Desc: This program shows for loop in C++
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int n;
	for (int i = 0; i < 3; ++i) 
		std::cout << "Print this line 3 times" << std::endl;
	std::cout << std::endl;

	std::cout << "Please enter a number: ";
	std::cin >> n;
	for (int i = n; i; --i)
		std::cout << "Print this line " << n << " times" << std::endl;
	
	return 0;
}
