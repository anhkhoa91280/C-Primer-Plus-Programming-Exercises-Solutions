#include <iostream>
#include "rectangle.h"
//static int rate = 3000;
extern int rate;
int main() {
	Rectangle r = { 4.5, 9.7 };
	std::cout << "Area: " << cal_area(r) << std::endl;
	std::cout << "Rate: " << rate << std::endl;

	return 0;
}
