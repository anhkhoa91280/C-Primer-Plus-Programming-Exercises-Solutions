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
struct Expenses {
	double expenses[MAX];
}; 
void fill_expenses(Expenses * e);
void show_expenses(Expenses * e);
const char * seasons[MAX] {"Spring", "Summer", "Autumn", "Winter"};
int main() {
	Expenses * expenses = new Expenses;

	fill_expenses(expenses);
	show_expenses(expenses);	

	return 0;
}
void fill_expenses(Expenses * e) {
	for ( int i=0; i<MAX; ++i ) {
		std::cout << "Enter expense for " << seasons[i] << ": ";
		std::cin >> e->expenses[i];
	}
}
void show_expenses(Expenses * e) {
	std::cout << "\nEXPENSES" << std::endl;
	for ( int i=0; i<MAX; ++i ) 
		std::cout << seasons[i] << ": $" << e->expenses[i] 
			<< std::endl;
}
