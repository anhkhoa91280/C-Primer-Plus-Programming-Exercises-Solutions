/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190918
 * Desc: This program reads number input using cin
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

const int MAX = 5;
int main() {
	double total = 0;
	double weights[MAX] {0};
	int cnt = 0;

	std::cout << "Enter weights of maximum " << MAX << " fish" << std::endl;
	std::cout << "Enter any letter to quit." << std::endl; 
	std::cout << "Fish #1: ";

	while ( cnt < MAX && std::cin >> weights[cnt] ) {
		if ( ++cnt < MAX )
			std::cout << "Fish #" << cnt + 1 << ": ";
	}

	for ( auto w : weights )
		total += w;
	
	std::cout << "You've caught " << total << " kg of fish." << std::endl;

	if ( cnt > 0 )
		std::cout << "The average weight of " << cnt << " fish is: " 
			<< total/cnt << " kg." << std::endl;

	return 0;
}
