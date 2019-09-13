/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190913
 * Desc: This program prints rows of stars
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main () {
	int rows;
	int empty_cols;

	std::cout << "Enter number of rows: ";
	std::cin >> rows;

	for ( int cols = 1; cols <= rows; ++cols ) {
		empty_cols = rows - cols;
		for ( int i = 0; i < empty_cols; ++i ) std::cout << " ";
		for ( int i = 0; i < cols; ++i ) std::cout << "*";
		std::cout << std::endl;
	}
	return 0;
}
