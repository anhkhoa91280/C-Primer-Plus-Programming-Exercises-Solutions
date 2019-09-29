/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190929
 * Desc: This program asks use to enter x and y coordinates and calculates polar
 * 	cordinates based on the given x & y cordinates
 * Reference: C++ Primer Plus - 6th Edition	
 * */
#include <iostream>
#include <cmath>

struct Rect {
	double x;
	double y;
};
struct Polar {
	double distance;
	double angle;
};
Polar rect_to_polar(Rect r);
void show_polar(Polar p);
int main() {
	Rect r;

	std::cout << "Enter x & y coordinates: ";
	while ( std::cin >> r.x >> r.y ) {
		show_polar(rect_to_polar(r));
		std::cout << "Another x & y coordinates combination or q to quit: ";
	}

	return 0;
}
Polar rect_to_polar(Rect r) {
	Polar p;

	p.distance = sqrt(pow(r.x, 2) + pow(r.y, 2));
	p.angle = atan2(r.y, r.x);

	return p;
}
void show_polar(Polar p) {
	double rad_to_deg_ratio = 57.29577951;
	
	std::cout << "Distance: " << p.distance << std::endl;
	std::cout << "Angle: " << p.angle * rad_to_deg_ratio 
		<< " degrees." << std::endl;
}
