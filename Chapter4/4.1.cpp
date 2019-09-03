/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190903
 * Desc: This program asks for first name, last name, grade, and age. Then prints
 * 	name as full name, grade down to 1 level, and age
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	std::string first_name, last_name;
	char grade;
	int age;

	std::cout << "What's your first name? ";
	std::cin >> first_name;

	std::cout << "What's your last name? ";
	std::cin >> last_name;

	std::cout << "What's letter grade do you deserve? ";
	std::cin >> grade;

	std::cout << "What's your age ";
	std::cin >> age;

	std::cout << "Name: " << last_name << ", " << first_name << std::endl;
	std::cout << "Grade: " << static_cast<char>(grade+1) << std::endl;
	std::cout << "Age: " << age << std::endl;

	return 0;
}
