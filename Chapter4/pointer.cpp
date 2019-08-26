/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190825
 * Desc: This program shows C++ pointer.
 * 	They are just 2 sides of the same coin. 
 * 	balance is the same as *p_balance
 * 	&balance is the same as p_balance
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int balance = 20e3;
	//* operator to declare the variable as of type pointer
	int * p_balance = &balance;

	//* operator can be used to dereference the value of the variable 
	//residing the memory address that the pointer's pointing to
	std::cout << "Balance: " << balance << std::endl;
	std::cout << "Balance: " << *p_balance << std::endl;

	std::cout << "p_balance: " << p_balance << std::endl;
	std::cout << "p_balance: " << &balance << std::endl;

	//use pointer to change the value of the variable it's pointing to
	*p_balance = *p_balance + 5e3;
	std::cout << "New balance: " << *p_balance << std::endl;

	return 0;
}
