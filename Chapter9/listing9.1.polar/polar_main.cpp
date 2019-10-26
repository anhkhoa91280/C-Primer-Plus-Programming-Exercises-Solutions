/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191026
 * Desc: This program calculates polar from a rectangle.
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>
#include "polar.h"

int main() {
	rect r;
	polar p;

	std::cout << "Q/q to quit." << std::endl;
	std::cout << "Enter x & y position for the rectangle: ";
	while ( std::cin >> r.x >> r.y ) {
		p = to_polar(r);
		show_polar(p);
		std::cout << "Enter another pair of x & y for a rectangle: ";
	}

	return 0;
}
