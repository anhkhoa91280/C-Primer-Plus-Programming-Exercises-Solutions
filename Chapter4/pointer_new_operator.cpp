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
	double * da, d;

	*dn = 1000;
	std::cout << "dn's value: " << *dn << std::endl; 
	std::cout << "location of the object that the pointer dn is pointing to: " 
		<< dn << std::endl; 
	std::cout << "location of the pointer dn itself: " << &dn << std::endl; 
	std::cout << "size of the unnamed object: " << sizeof(*dn) << std::endl; 
	std::cout << "size of the pointer dn: " << sizeof(dn) << std::endl;
	std::cout << std::endl;
	//free up memory allocated by 'new' operator
	delete dn;
	//point dangling poinnter to NULL
	dn = NULL;

	da = &d;
	*da = 23.5;
	std::cout << "da's value: " << *da << std::endl; 
	std::cout << "location of the object that the pointer da is pointing to: " 
		<< da << std::endl; 
	std::cout << "location of the pointer da itself: " << &da << std::endl; 
	std::cout << "size of the named object (variable): " << sizeof(*da) << std::endl; 
	std::cout << "size of the pointer da: " << sizeof(da) << std::endl;
	std::cout << std::endl;
	da = NULL;
	//the following piece of code won't work because it will free memory space
	//for the variable that da's pointing to which d, and that's illegal
	//delete da;

	return 0;
}
