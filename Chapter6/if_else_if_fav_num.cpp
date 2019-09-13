/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190913
 * Desc: This program asks user to guess a favourite number
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main () {
	const int FAV = 34;
	int guess;

	std::cout << "Enter a number to guess my favourite number: ";
	
	do {
		std::cin >> guess;
		if ( guess < FAV ) 
			std::cout << "Your guess is too low, try again! ";
		else if (guess > FAV)
			std::cout << "Your guess is too high, try again! ";
		else
			std::cout << "Congratulations! You guessed it right" << std::endl;
			
	} while ( guess != FAV ); 

	return 0;
}
