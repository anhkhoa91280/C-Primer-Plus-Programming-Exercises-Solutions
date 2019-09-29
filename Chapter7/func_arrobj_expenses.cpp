/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190929
 * Desc: This program stores expenses for 4 seasons using array object
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <array>
#include <string>

const int MAX = 4;
void fill_expenses(std::array<double, MAX> * expenses);
void show_expenses(std::array<double, MAX> * expenses);
const std::array<std::string, MAX> seasons {"Spring", "Summer", "Autumn", "Winter"};
int main() {
	std::array<double, MAX> expenses;

	fill_expenses(&expenses);
	show_expenses(&expenses);	

	return 0;
}
void fill_expenses(std::array<double, MAX> * expenses) {
	for ( int i=0; i<MAX; ++i ) {
		std::cout << "Enter expense for " << seasons[i] << ": ";
		std::cin >> (*expenses)[i];
	}
}
void show_expenses(std::array<double, MAX> * expenses) {
	std::cout << "\nEXPENSES" << std::endl;
	for ( int i=0; i<MAX; ++i ) 
		std::cout << seasons[i] << ": $" << (*expenses)[i] 
			<< std::endl;
}
