/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190908
 * Desc: This program shows how to do a waiting clock using clock() class and 
 * 	while loop
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <ctime>

int main() {
	int sec;

	std::cout << "Enter number of seconds: ";
	std::cin >> sec;

	clock_t delay = sec * CLOCKS_PER_SEC;
	clock_t start = clock();
	std::cout << "..." << std::endl;

	while ( clock() - start < delay );

	std::cout << "End of clock" << std::endl;

	return 0;
}
