/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190903
 * Desc: This program shows memory storage in C++. Memory storage types are
 * 	Automatic, Static, and Dynamic
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

//static variable, can be used in any scope
struct person {
	std::string name;
	int age;
};
char * getname();
int main() {
	char * name; 

	name = getname();
	std::cout << "name at " << (int *)name << std::endl;
	//memory allocated by pn in getname() function is freed here
	delete [] name;

	name = getname();
	std::cout << "name at " << (int *)name << std::endl;
	//memory allocated by pn in getname() function is freed here
	delete [] name;

	return 0;
}
char * getname() {
	const int SIZE = 20;
	//temp uses automatic storage (stack) which will be automatically freed once 
	//the program finishes execution the getname() function
	char temp[SIZE];

	std::cout << "Enter your name: ";
	std::cin >> temp;

	//pn uses dynamic storage (heap) which can be used outside the scope of 
	//the getname() function 
	char * pn = new char[sizeof(temp) + 1];
	strncpy(pn, temp, sizeof(temp));

	return pn;
}
