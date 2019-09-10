/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190910
 * Desc: This program compares results of different investment plans
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main () {
	int years = 0;
	int original_bal = 100;
	float fixed_ir = 0.1f;
	float compound_ir = 0.05f;

	float daphne_bal = original_bal;
	float cleo_bal = original_bal;

	do {  
		daphne_bal += fixed_ir * original_bal;
		cleo_bal += compound_ir * cleo_bal;
		++years;
		std::cout << "After year " << years << std::endl;
		std::cout << "Daphne balance = " << daphne_bal << std::endl;
		std::cout << "Cleo balance = " << cleo_bal << std::endl;
		std::cout << std::endl;
	} while ( daphne_bal > cleo_bal ); 
	std::cout << "After " << years 
		<< " Cleo's investment exceeds Daphne's investment" << std::endl;

	return 0;
}
