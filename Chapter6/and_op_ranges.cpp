/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190914
 * Desc: This program uses AND operator to set up ranges
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
const char * bonuses[4] = {
	"Yamaha sr400",
	"Kawasaki w800",
	"Ducati Scrambler",
	"Triumph Bobber Black"
};
int main () {
	int years, i;
	std::cout << "Employees are awarded accordingly to number of years of "
		"contribution." << std::endl;
	std::cout << "Enter your years to find out or enter 0 to quit the program: ";
	std::cin >> years;

	while ( years != 0 ) {
		i = -1;
		//different ranges using AND ops and if else if statements
		if ( years >= 1 && years <= 5 )
			i = 0;
		else if ( years > 5 && years <= 10 )
			i = 1;
		else if ( years > 10 && years <= 15 )
			i = 2;
		else if ( years > 15 )
			i = 3;
		else 
			std::cout << "Please enter a positive number" << std::endl;

		if ( i >=0 && i <= 3 )
			std::cout << "Congratulations! You are awarded with a " << bonuses[i] 
				<< std::endl;

		std::cout << "\nTry again or enter 0 to quit the program: ";
		std::cin >> years;
	}

	return 0;
}
