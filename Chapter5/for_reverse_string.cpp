/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190906
 * Desc: This program shows how you can traverse a string using a for loop
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

int main() {
	std::string str;

	std::cout << "Enter a string: ";
	std::cin >> str;

	for(int i = str.size() - 1; i >= 0; --i)
		std::cout << str[i];
	std::cout << std::endl;

	return 0;
}
