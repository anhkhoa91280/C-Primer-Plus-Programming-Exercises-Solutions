/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191022
 * Desc: This program takes an array of 5 T elements as function argument and picks 
 * the biggest 1. 
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>

template<class T> 
T max5(const T *);
int main() {
	int i_arr[] = { 9, 8, 10, 17, 15 };
	double d_arr[] = { 0.9, 1.5, 5.5, 10.6, 3.2 };

	std::cout << "Max of int array: " << max5(i_arr) << std::endl;
	std::cout << "Max of double array: " << max5(d_arr) << std::endl;

	return 0;
}
template<class T> 
T max5(const T * x) {
	T max = 0;
	for ( int i=0; i<5; ++i )
		if ( x[i] > max )
			max = x[i];
	return max;
}
