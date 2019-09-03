/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190903
 * Desc: This program asks for first name, last name, and constructs full name 
 *  in a single string
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	std::string first_name, last_name, full_name;

	std::cout << "Enter your first name: ";
	getline(std::cin, first_name);

	std::cout << "Enter your last name: ";
	getline(std::cin, last_name);

	full_name = last_name + ", " + first_name;
	std::cout << "Here's the information in a single string: " << full_name 
		<< std::endl;

	return 0;
}
