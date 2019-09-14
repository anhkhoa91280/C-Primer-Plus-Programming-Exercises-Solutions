/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190914
 * Desc: This program shows logical AND operator in C++
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main () {
	const int FAV = 34;
	int guess;
	int tries = 0;
	int MAX = 5;

	std::cout << "Enter a number b/w 1-100 to guess my favourite number." 
		<< std::endl;

	do {
		std::cout << "\nYou only have " << MAX - tries <<  " tries remaining."
		   " Please guess: ";
		std::cin >> guess;
		if ( guess < FAV ) 
			std::cout << "Too low. " << std::endl;
		else if ( guess > FAV )
			std::cout << "Too high. " << std::endl;
		else
			std::cout << "Congratulations! You guessed it right." << std::endl;
	} while ( FAV != guess && ++tries < 5 );

	return 0;
}

