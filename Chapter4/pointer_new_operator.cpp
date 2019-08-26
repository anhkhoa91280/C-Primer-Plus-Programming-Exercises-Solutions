/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190826
 * Desc: This program shows how to allocate memory block using new operator
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	//dn's pointing to an unnamed object (data object, differently to the object
	//as a thing in the context of OOP)
	int * dn = new int;
	int * da, d;

	*dn = 1000;
	std::cout << "dn's value: " << *dn << std::endl; 
	std::cout << "location of the object that the pointer dn is pointing to: " 
		<< dn << std::endl; 
	std::cout << "location of the pointer dn itself: " << &dn << std::endl; 
	std::cout << std::endl;
	dn = NULL;

	da = &d;
	*da = 2000;
	std::cout << "da's value: " << *da << std::endl; 
	std::cout << "location of the object that the pointer da is pointing to: " 
		<< da << std::endl; 
	std::cout << "location of the pointer da itself: " << &da << std::endl; 
	std::cout << std::endl;
	da = NULL;

	return 0;
}
