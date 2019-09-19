/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190918
 * Desc: This program reads number input for golf scores. It forces user to 
 * 	enter a number instead of words
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

const int MAX = 5;
int main() {
	int scores[MAX];
	int total = 0;
	int min, max;
	int cnt = 0;

	std::cout << "Enter " << MAX << " golf scores." << std::endl;

	while ( cnt < MAX ) {
		std::cout << "Score #" << cnt + 1 << ": ";
		//for user to enter correct input
		while ( !(std::cin >> scores[cnt]) ) {
			//reset the cin object from error messages
			std::cin.clear();

			//get rid of bad input character by character
			while ( std::cin.get() != '\n') 
				continue;

			std::cout << "Please enter a whole number: ";
		} 
		++cnt;
	}
	
	min = max = scores[0];
	for ( auto score : scores ) {
		total += score;
		score < min ? min = score : min = min;
		score > max ? max = score : max = max;
	}

	std::cout << "Max score = " << max << std::endl;
	std::cout << "Min score = " << min << std::endl;

	std::cout << "Average score = " << total/MAX << std::endl;

	return 0;
}
