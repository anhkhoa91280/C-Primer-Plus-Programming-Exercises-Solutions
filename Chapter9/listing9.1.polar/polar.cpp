#include "polar.h"
#include <cmath>
#include <iostream>

polar to_polar(const rect & r) {
	polar p;
	p.distance = std::sqrt(std::pow(r.x, 2) + std::pow(r.y, 2));
	p.angle = std::atan2(r.y, r.x);
	return p;
}
void show_polar(const polar & p) {
	std::cout << "Distance: " << p.distance << ", Angle: " << p.angle << std::endl;
}
