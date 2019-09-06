/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190906
 * Desc: This program shows pre and post increment/decrement on pointer in C++
 * 	Rules:
 * 		+precedence is from left-right of the pointer
 * 		+if operator on left side of the pointer, precedence works from operator
 * 		closer to the pointer first
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	float arr[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	float * pa = arr;

	//dereference pa which is pointing to arr[0], and increment the value 
	//in arr[0]
	std::cout << "++*pa = " << ++*pa << std::endl;

	//increment pa first, now pa points to arr[1], then deference arr[1]
	std::cout << "*++pa = " << *++pa << std::endl;

	//derefrence pa, which is currently pointing to arr[1], then increment pa
	//so after the expression, pa will point to arr[2]
	std::cout << "*pa++ = " << *pa++ << std::endl;

	//dereference pa, which is currently pointing to arr[2], then increment the
	//dereferenced value but you won't see the change in this statement yet
	std::cout << "(*pa)++ = " << (*pa)++ << std::endl;
	//you can see the change after the above statement
	std::cout << "*pa = " << *pa << std::endl;

	return 0;
}
