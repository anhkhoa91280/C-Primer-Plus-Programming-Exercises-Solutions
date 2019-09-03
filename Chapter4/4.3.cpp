/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190903
 * Desc: This program asks for first name, last name, and store full name in a 
 * 	variable. The program uses char array for storing variables.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	const int SIZE = 80;
	char first_name[SIZE];
	char last_name[SIZE];
	char full_name[SIZE*2];

	std::cout << "Enter your first name: ";
	std::cin.getline(first_name, SIZE);
	first_name[strlen(first_name)] = '\0';

	std::cout << "Enter your last name: ";
	std::cin.getline(last_name, SIZE);
	last_name[strlen(last_name)] = '\0';

	strcpy(full_name, last_name);
	strcat(full_name, ", ");
	strcat(full_name, first_name);
	std::cout << "Here's the information in a single string: " << full_name
		<< std::endl;
}
