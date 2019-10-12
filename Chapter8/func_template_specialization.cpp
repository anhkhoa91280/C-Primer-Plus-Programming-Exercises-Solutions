/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191012
 * Desc: This program illustrate specific case of a function template which overrides
 * 	a normal template.
 * 	Rules:
 * 	+A specialization overrides a regular template.
 * 	+A non template function overrides both.
 * The example shows that with any data type, the compiler just generates a regular 
 * function that simply swaps 2 data objects. But with a special situation where
 * there are 2 Account objects need to be swapped, the compiler will generate a 
 * special function which only swaps 1 of the struct member (amount).
 * Reference: C++ Primer Plus - 6th Edition.	
 * */
#include <iostream>
#include <string>

template<class T>
void swap(T & a, T & b);

struct Account {
	std::string name;
	float amount;
};
template<> void swap<Account>(Account & a, Account & b);

void display_acc(const Account & a);

int main() {
	int a = 2;
	int b = 9;

	std::cout << "Before swapping numbers:" << std::endl;
	std::cout << "a: " << a << ", b: " << b << std::endl;
	swap(a,b);
	std::cout << "After swapping numbers:" << std::endl;
	std::cout << "a: " << a << ", b: " << b << std::endl;

	Account c {"John", 1.5};
	Account d {"Jane", 3000};
	std::cout << "John and Jane before swapping wallets:" << std::endl;
	display_acc(c);
	display_acc(d);
	swap(c,d);
	std::cout << "John and Jane after swapping wallets:" << std::endl;
	display_acc(c);
	display_acc(d);

	return 0;
}
template<class T>
void swap(T & a, T & b) {
	T temp = a;
	a = b;
	b = temp;
}
template<> void swap<Account>(Account & a, Account & b) {
	float temp = a.amount;
	a.amount = b.amount;
	b.amount = temp;
}
void display_acc(const Account & a) {
	std::cout << "Name: " << a.name << ", amount: " << a.amount << std::endl;
}
