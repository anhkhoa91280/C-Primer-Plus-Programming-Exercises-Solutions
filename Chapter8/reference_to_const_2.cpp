/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191006
 * Desc: This program illustrates situations when a reference is not bound directly
 * 	to a variable from the calling function. In this case, the ref is bound to a
 * 	temporary varialbe if:
 * 	1. the argument is of correct type but isn't a lvalue.
 * 	2. the argument is NOT of correct type but can be converted to the correct type.
 * 	3. the parameter is of reference to a constant (non-modifiable lvalue).
 *  lvalue: is data object the can be referenced by its address, eg; a 
 *  variable, an array element, a member of a structure, a reference, 
 *  a dereferenced pointer.	
 * Reference: C++ Primer Plus - 6th Edition. 
 * */
#include <iostream>
struct Square {
	double side;
};
double cube(const double & x);
int main() {
	double side = 3.0;
	double * p = &side;
	double arr[3] = {1.0, 2.0, 3.0};
	Square square = { 4.0 };
	long t = 5L;

	std::cout << cube(side) << std::endl; //x is side
	std::cout << cube(*p) << std::endl; //x is side
	std::cout << cube(arr[1]) << std::endl; //x is arr[1]
	std::cout << cube(square.side) << std::endl; //x is square.side
	std::cout << cube(t) << std::endl; //x is temporary variable
	std::cout << cube(6.0) << std::endl; //x is temporary variable
	std::cout << cube(side+4) << std::endl; //x is temporary 

	return 0;
}
double cube(const double & x) {
	return x*x*x;
}
