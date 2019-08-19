/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190819
 * Desc: This program shows difference between reading line in C-style string
 * 	and C++ string object
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	const int SIZE = 10;
	char c_name[SIZE];
	std::string s_name;

	//The length of an uninitialized character array is random because strlen
	//counts the number of bytes from 1st character until the first occurrence
	//of a '\0' character
	std::cout << "Character array length before entering name: " 
		<< std::strlen(c_name) << std::endl;
	std::cout << "Enter a name: ";
	std::cin.getline(c_name, 10);
	std::cout << "Character name entered: " << c_name << std::endl;
	std::cout << "Character name has length: " << std::strlen(c_name) << std::endl;
	std::cout << std::endl;

	//The length of an uninitialized string is set to 0
	std::cout << "String length before entering name: " 
		<< s_name.size() << std::endl;
	std::cout << "Enter another name: ";
	getline(std::cin, s_name);
	std::cout << "String name entered: " << s_name << std::endl;
	std::cout << "String name has length: " << s_name.size() << std::endl;

}
