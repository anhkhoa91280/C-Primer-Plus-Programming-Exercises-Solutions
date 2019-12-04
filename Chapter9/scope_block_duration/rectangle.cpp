#include "rectangle.h"
int rate = 1500; //by default rate has external linkage so it's available in 
				//other Translation Units as well
double cal_area(Rectangle & r) {
	x_rate = 2;
	return x_rate*rate*(r.width * r.length);
	//return rate*(r.width * r.length);
}
double cal_circumferrence(Rectangle & r) {
	return rate*(2 * (r.width + r.length));
}
