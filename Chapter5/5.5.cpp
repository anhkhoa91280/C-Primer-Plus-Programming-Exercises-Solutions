/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190911
 * Desc: This program calculates number of book sales in a year
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <cstring>

int main () {
	const int MONTHS = 12;
	const char * months[MONTHS];
	months[0] = "January";
	months[1] = "February";
	months[2] = "March";
	months[3] = "April";
	months[4] = "May";
	months[5] = "June";
	months[6] = "July";
	months[7] = "August";
	months[8] = "September";
	months[9] = "October";
	months[10] = "November";
	months[11] = "December";
	int sales[MONTHS]; 
	int sum = 0;
	
	for ( int i = 0; i < MONTHS; ++i ) {
		std::cout << "Enter monthly sales for " << months[i] << ": ";
		std::cin >> sales[i];
		sum += sales[i];
	}
	std::cout << "Sales of C++ for Fools in 12 months = " << sum << std::endl;

	return 0;
}
