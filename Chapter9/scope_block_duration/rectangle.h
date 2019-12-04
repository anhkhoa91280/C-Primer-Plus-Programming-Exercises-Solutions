#ifndef RECTANGLE_H_
#define RECTANGLE_H_

//static int rate = 1000;
static int x_rate; //the compiler will make this symbol visible within the 
					//Translation Unit.
struct Rectangle {
	double width;
	double length;
};
double cal_area(Rectangle &);
double cal_circumferrence(Rectangle &);
#endif
