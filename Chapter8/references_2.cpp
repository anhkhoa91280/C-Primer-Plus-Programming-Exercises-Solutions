/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191005
 * Desc: This program illustrates another of C++ reference when it's bound to a 
 * 	value of a variable that a pointer's pointing to.
 * Reference: C++ Primer Plus - 6th Edition	
 * */
#include <iostream>

int main() {
	int car = 10;
	int * pa = &car;
	int & automobile = *pa;

	std::cout << "*pa=" << *pa << ", automobile=" << automobile 
		<< ", car: " << car << std::endl;
	std::cout << "pa=" << pa << ", &automobile=" << &automobile << std::endl;

	int bike = 5;
	pa = &bike;
	automobile = *pa;
	//Notice that, the address of automobile is still the same, automobile is still
	//bound to car
	std::cout << std::endl;
	std::cout << "*pa=" << *pa << ", automobile=" << automobile 
		<< ", car: " << car << std::endl;
	std::cout << "pa=" << pa << ", &automobile=" << &automobile << std::endl;

	return 0;
}
