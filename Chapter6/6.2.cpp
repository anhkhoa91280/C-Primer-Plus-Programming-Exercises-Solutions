/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190920
 * Desc: This program reads up to 10 donations until a non-digit character is 
 * 	entered, it then calculates the average, and reports number of donations
 * 	that are above the average.
 * Reference: C++ Primer Plus - 6th Edition 
 * */
#include <iostream>
#include <array>
#include <cctype>

const int MAX = 10;
int main() {
	std::array<double, MAX> donations;
	int cnt = 0;
	double sum = 0;
	double avg = 0;
	int cnt_above_avg = 0;
	
	std::cout << "Please enter up to 10 donations\n." 
				"Enter a non digit character to quit" << std::endl;
	std::cout << "Enter donation #1: ";

	while ( std::cin >> donations[cnt] ) {
		sum += donations[cnt];
		if ( ++cnt >= MAX )
			break;
		std::cout << "Enter donation #" << cnt + 1 << ": ";
	}

	avg = sum/cnt;
	std::cout << "Sum of donations = " << sum << std::endl;
	std::cout << "Average donation = " << avg << std::endl;

	for ( double d : donations ) {
		if ( d > avg )
			++cnt_above_avg;
	}
	std::cout << "There're " << cnt_above_avg << " donations above the average"
		<< std::endl;

	return 0;
}
