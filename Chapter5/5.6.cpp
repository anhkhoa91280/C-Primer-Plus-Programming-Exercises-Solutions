/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190911
 * Desc: This program stores book sales in 3 years
 * Reference?: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main () {
	const int YEARS  { 3 };
	const int SALES_MONTHS { 12 };
	int sales[YEARS][SALES_MONTHS] = {
		{ 10, 9, 8, 7, 9, 11, 12, 7, 13, 11, 10, 12 },
		{ 11, 8, 8, 5, 6, 13, 12, 8, 11, 10, 11, 9 },
		{ 15, 6, 4, 2, 8, 14, 13, 8, 12, 11, 9, 13 }
	}; 
	int sums_year[YEARS] {};
	int coumpound_sums = 0;

	for ( int i = 0; i < YEARS; ++i ) {
		for ( int j = 0; j < SALES_MONTHS; ++j )
			sums_year[i] += sales[i][j];
	}

	for ( int i = 0; i < YEARS; ++i ) {
		std::cout << "Total sales in year " << i + 1 << ": " << sums_year[i]
			<< std::endl;
		coumpound_sums += sums_year[i];
	}

	std::cout << "Total sales in " << YEARS << ": " << coumpound_sums << std::endl;

	return 0;
}
