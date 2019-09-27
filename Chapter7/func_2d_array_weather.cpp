/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190927
 * Desc: This program calculates average temperature of each week using 2d-array
 * 	as arguments to function.
 * Reference: C++ Primer Plus - 6th Edition
 * NOTE: You will learn how to correctly pass 2d-array argument, declare function
 * prototypes etc.
 * */
#include <iostream>

const int ROWS = 4;
const int COLS = 7;
double avg_temp(double (*p)[COLS], int n);
int main() {
	double temps[ROWS][COLS] = {
		{ 30, 31, 35, 39, 34, 28, 25 },
		{ 29, 34, 34, 35, 38, 27, 26 },
		{ 26, 23, 21, 20, 25, 28, 30 },
		{ 31, 28, 27, 30, 25, 20, 18 }	
	};

	std::cout.precision(1);
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);

	std::cout << "Average temperature for the whole 4 weeks: " 
		<< avg_temp(temps, ROWS) << std::endl;

	std::cout << "Average temperature for the first week: " 
		<< avg_temp(&temps[0], 1) << std::endl;

	std::cout << "Average temperature for the last week: " 
		<< avg_temp(&temps[ROWS-1], 1) << std::endl;

	std::cout << "Average temperature for the 2 weeks in between: " 
		<< avg_temp(&temps[ROWS-3], 2) << std::endl;

	return 0;
}
double avg_temp(double (*p)[COLS], int n) {
	double total = 0;

	for ( int r=0; r<n; ++r ) 
		for ( int c=0; c<COLS; ++c )
			total += p[r][c];

	return total/(n*COLS);
}
