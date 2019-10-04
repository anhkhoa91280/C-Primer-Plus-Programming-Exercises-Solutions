/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191005
 * Desc: This program callbacks a series of functions that takes 2 double as
 * 	arguments and returns a double as result such as add, subtract, times, divide
 * Reference: C++ Primer Plus - 6th Edition 	 
 * */
#include <iostream>

double add(double x, double y);
double subtract(double x, double y);
double times(double x, double y);
double divide(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));
const int MAX = 4;
int main() {
	double x,y;

	std::cout << "Enter a pair of floating point numbers: ";
	while ( std::cin >> x >> y ) {
		double (*fp[MAX])(double, double) {add, subtract, times, divide};
		double (*(*pfp)[MAX])(double, double) = &fp;
		std::cout << x << " + " << y << " = " << (*(*pfp)[0])(x,y) << std::endl;
		std::cout << x << " - " << y << " = " << (*(*pfp)[1])(x,y) << std::endl;
		std::cout << x << " * " << y << " = " << (*(*pfp)[2])(x,y) << std::endl;
		std::cout << x << " / " << y << " = " << (*(*pfp)[3])(x,y) << std::endl;
		
		std::cout << "Another pair or a character to quit: ";
	}

	return 0;
}
double add(double x, double y) {
	return x+y;
}
double subtract(double x, double y) {
	return x-y;
}
double times(double x, double y) {
	return x*y;
}
double divide(double x, double y) {
	return x/y;
}
double calculate(double x, double y, double (*pf)(double, double)) {
	return (*pf)(x,y);
}
