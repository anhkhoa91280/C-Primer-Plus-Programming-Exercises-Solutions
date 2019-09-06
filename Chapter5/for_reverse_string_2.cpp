/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190906
 * Desc: This program shows how to reverse a string permanently using comma
 * 	operator in a for loop
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	std::string str;
	char temp;

	std::cout << "Enter a string: ";
	std::cin >> str;
	for (int i = 0, j = str.size() - 1; i < j; ++i, --j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	std::cout << str << std::endl;

	return 0;
}
