/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191005
 * Desc: This program shows references in C++.
 * Reference: C++ Primer Plus - 6th Edition  
 * */
#include <iostream>

int main() {
	int car = 5;
	int & automobile = car; 
	//automobile = car; //this is impossible since a reference must be initialized
						//with declaration.
						//a ref must be bound with a variable because there's no
						//concepts as null reference as with pointer.
	int * const pa = &car;

	std::cout << "car: " << car << ", automobile: " << automobile << ", *pa: "
		<< *pa << std::endl;
	std::cout << "&car: " << &car << ", &automobile: " << &automobile << std::endl;
 
	int bike = 10;
	automobile = bike; //this is not a change of reference, just an assignment.
						//once a ref is bound to an object it remains bound to that
						//object forever. Under the hood, a reference is just a 
						//const pointer.
	//pa = &bike; //this is impossible since pa is a constant pointer.
	std::cout << "bike: " << bike << ", automobile: " << automobile << std::endl;
	std::cout << "car is now: " << car << std::endl;
	std::cout << "&bike: " << &bike << ", &automobile: " << &automobile 
		<< std::endl;

	return 0;
}
