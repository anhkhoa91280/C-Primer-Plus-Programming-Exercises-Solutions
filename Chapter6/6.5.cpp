/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190921
 * Desc: This program calculates income tax for the Kingdom of Neutronia
 * 	First 5,000 tvarps: 0% tax
	Next 10,000 tvarps: 10% tax
	Next 20,000 tvarps: 15% tax
	Tvarps after 35,000: 20% tax

	Referece: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
const int T_5K = 5000;
const int T_15K = 15000;
const int T_35K = 35000;
const double R_10 = 0.1;
const double R_15 = 0.15;
const double R_20 = 0.2;
int main() {
	double income;
	double tax;

	std::cout << "Enter income or negative number or a non digit character to quit"
		<< std::endl;
	std::cout << "Income:";

	while ( std::cin >> income && income > 0 ) {
		if ( income<=T_5K )
			tax = 0;
		else if ( income <= T_15K && income > T_5K )
			tax = (income - 5000) * R_10;
	   	else if ( income <= T_35K && income > T_15K) 
			tax = ( income - 15000) * R_15 + 10000 * R_10;
		else
			tax = ( income-35000 )*R_20 + 20000 * R_15 + 10000 * R_10;
		std::cout << "Tax: " << tax << std::endl;
		std::cout << "Net income: " << income - tax << std::endl;
		std::cout << "\nNext income: ";
	}

	return 0;
}
