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
	std::cout << "Address of student: " << students << std::endl; 
	std::cout << "2nd student: " << *(students + 1) << std::endl;
	std::cout << "Address of student: " << students << std::endl;
  	//Internally whenever you use array[i], C++ converts to *(array+i)	
	std::cout << "Last student: " << students[3] << std::endl;
	std::cout << std::endl;
	
	//use pointer arithmetic
	std::cout << "Address of ps: " << ps << std::endl; 
	//you can change the value of a pointer like the following
	//but not array, that's a difference between array and pointer
	std::cout << "2nd student: " << *(++ps) << std::endl;
	std::cout << "Address of ps now: " << ps << std::endl; 
	std::cout << "1st student: " << *(--ps) << std::endl;
	std::cout << "Address of ps now: " << ps << std::endl; 

	//another difference b/w pointer and array:
	//sizeof() for an array yields the size of the array
	//sizeof() for a pointer yields the size of the pointer
	std::cout << "\nSize of students array: " << sizeof(students) << std::endl;
	std::cout << "Size of pointer to students array: " << sizeof(ps) << std::endl;

	return 0;
}
