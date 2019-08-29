/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190829
 * Desc: This program shows arithmetic operations on array and pointer
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

int main() {
	std::string students[] = {"Tom", "Mark", "Pete", "Kane"};
	std::string * ps = students;

	//use pointer arithmetic on array name
	std::cout << "1st student: " << *students << std::endl;
	std::cout << "2nd student: " << *(students + 1) << std::endl;
	
	//use pointer arithmetic
	std::cout << "3rd student: " << *(ps+2) << std::endl;
	std::cout << "Size of students array: " << sizeof(students) << std::endl;
	std::cout << "Size of pointer to students array: " << sizeof(ps) << std::endl;

	return 0;
}
