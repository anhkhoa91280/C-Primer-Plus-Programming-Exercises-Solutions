/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190903
 * Desc: This program shows times and average of 40-yd dash
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	double times[3];

	std::cout << "First time: ";
	std::cin >> times[0];
	std::cout << "Second time: ";
	std::cin >> times[1];
	std::cout << "Last time: ";
	std::cin >> times[2];

	std::cout << times[0] << ", " << times[1] << ", " << times[2] 
		<< ". Average: " << (times[0] + times[1] + times[2])/3 << std::endl;

	return 0;
}
