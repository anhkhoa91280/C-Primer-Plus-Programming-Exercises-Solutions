/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191011
 * Desc: This program shows function overloading with reference parameters
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>

void cube(double & x); //accepts only modifiable lvalue.
void cube(const double & x); //accepts lvalue, rvalue.
void cube(const double && x); //accepts only rvalue.
int main() {
	double a = 10.0;
	double b = 20.0;
	const double c = 30.0; 

	//if you omit cube(double &), the below line of code will invoke 
	//cube(const double &)
	cube(a);

	cube(c);

	//if you omit cube(const double &&), the below line of code will invoke 
	//cube(const double &)
	cube(a+b);

	return 0;
}
void cube(double & x) //accepts only modifiable lvalue.
{
	std::cout << "void cube(double & x) //accepts only modifiable lvalue" 
		<< std::endl;
}
void cube(const double & x) //accepts lvalue, rvalue.
{
	std::cout << "void cube(const double & x) //accepts lvalue, rvalue." << std::endl;
}
void cube(const double && x) //accepts only rvalue.
{
	std::cout << "void cube(const double && x) //accepts only rvalue." << std::endl;
}
