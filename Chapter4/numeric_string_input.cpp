/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190818
 * Desc: This program shows the problem between mixing numeric input and string input
 * 	and how to solve
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int year;
	const int SIZE = 80;
	char address[SIZE];

	std::cout << "Enter the year the house was built: ";
	(std::cin >> year).get();

	//The below line of code will cause problem because it leaves '\n' character
	//in the input buffer causing getline() to read '\n' as the first character 
	//and conclude that there's no more input to read.
	//std::cin >> year;

	std::cout << "Enter the address: ";
	std::cin.getline(address, SIZE);

	std::cout << "The house " << address << " was built in " << year << std::endl;

	return 0;
}
