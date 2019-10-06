/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191005
 * Desc: This program illustrates reference to const variable to protect the 
 * 	variable from unintended alteration.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

double cubev(double x);
double cuber(double & x);
double cuberc(double const & x);
int main() {
	double x;

	std::cout << "Enter a number: ";
	std::cin >> x;

	std::cout << cubev(x) << " is the cube of " << x << std::endl;
	//pass-by-ref in this case changes the original value which is not desirable
	//and should be avoided by using pass-by-value only because the functinality is
	//too simple and the data structure is very simple to use reference (not so 
	//efficient)
	std::cout << cuber(x) << " is the cube of " << x << std::endl;
	std::cout << cuberc(x) << " is the cube of " << x << std::endl;
	//the below line of code will not compile because cuber parameter must be 
	//bound to an actual varialbe, not an expression
	//cuber(x+3);
}
double cubev(double x) {
	x *= x*x;
	return x;
}
double cuber(double & x) {
	x *= x*x;
	return x;
}
double cuberc(double const & x) {
	//the below line of code wont work because x is of type "double const &" 
	//x *= x*x;
	return x*x*x;
}
