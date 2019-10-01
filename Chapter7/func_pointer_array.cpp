/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191001
 * Desc: This program shows array of function pointers, pointer to pointer to
 * 	function, and pointer to an array of function pointers.
 * Reference: C++ Primer Plus - 6th Edition	
 * */
#include <iostream>
const double * f1(const double * arr, int n);
const double * f2(const double * arr, int n);
const double * f3(const double * arr, int n);
const int SIZE = 3;
int main() {
	double arr[SIZE] = {123.456, 456.789, 789.123};

	//single pointer to function
	const double * (*a)(const double *, int) = &f1;
	auto b = a; //use of 'auto' is quick but it can be error prone. for example
				//b = &a or b = *a, these lead you to bugs that can be hard to track
	//the C++11 way which is shorter but can be confusing to novice programmers
	std::cout << "Address: " << b(arr, SIZE) << " Value: " 
		<< *b(arr, SIZE) << std::endl;
	//the C++98 way which is uglier but more intuitive
	a = f2;
	std::cout << "Address: " << (*a)(arr, SIZE) << " Value: " 
		<< *(*a)(arr, SIZE) << std::endl;

	//an array of pointers to function
	const double * (*pa[SIZE])(const double *, int) = {f1, f2, f3};
	//using an array of pointers to function
	for ( int i=0; i<SIZE; ++i ) {
		std::cout << "Address of return value  #" << i+1 << ": " 
			<< (*pa[i])(arr, SIZE)
			<< ", and its value: " << *(*pa[i])(arr, SIZE) << std::endl;
	}
	std::cout << std::endl;

	//pointer to an array of pointers to function
	const double * (*(*ppa)[SIZE])(const double *, int) = &pa;
		
	for ( int i=0; i<SIZE; ++i ) {
		std::cout << "Address of return value  #" << i+1 << ": " 
			<< (*(*ppa)[i])(arr, SIZE)
			<< ", and its value: " << *(*(*ppa)[i])(arr, SIZE) << std::endl;
	}

	return 0;
}
const double * f1(const double * arr, int n) {
	return arr;
}
const double * f2(const double * arr, int n) {
	return arr+1;
}
const double * f3(const double * arr, int n) {
	return arr+2;
}
