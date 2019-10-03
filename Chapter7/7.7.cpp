/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190926
 * Desc: This program manages real estate properties prices using 3 functions
 * 	1. 1st function fills array of properties with prices
 * 	2. 2nd function shows contents of the price array
 * 	3. 3rd function revalues the price array
 * Reference: C++ Primer Plus - 6th Edition	
 * */
#include <iostream>

double * fill_props(double * start, double * end);
void show_props(const double * start, const double * end);
double get_revalue_rate();
void revalue_props(double r, double * start, double * end);
const int MAX = 5;
int main() {
	double props[MAX] {0};
	double * end;
	double revalue_rate;

	end = fill_props(props, &props[0]+MAX);
	show_props(&props[0], end);
	
	std::cout << std::endl;
	revalue_rate = get_revalue_rate();
	revalue_props(revalue_rate, props, end);
	show_props(&props[0], end);

	return 0;
}
double * fill_props(double * start, double * end) {
	int i=0;
	double * p;
	double price;

	std::cout << "Plz provide prices for properties, enter a negative "
		"value to end the provision." << std::endl;
	for ( p=start; p!=end; ++p ) {
		std::cout << "Enter the price for property #" << i+1 << ": ";
		
		if ( !(std::cin >> price) ) {
			std::cin.clear();
			while ( std::cin.get() != '\n' )
				continue;
			std::cout << "Bad input. Input should be a number\n." 
			   	<< "Terminating prematurely..." << std::endl;
			break;
		} else if ( price < 0 ) 
			break;
		else
			*p = price;
		++i;
	}
	return p;
}
void show_props(const double * start, const double * end) {
	const double * p;
	int cnt = 0;
	for ( p=start; p!=end; ++p ) { 
		std::cout << "Price of prop #" << ++cnt << " is: " << *p << std::endl;
	}
}
double get_revalue_rate() {
	double r;

	std::cout << "Enter revalue rate: ";
	while ( !(std::cin >> r) && r < 0) {
		std::cin.clear();
		while ( std::cin.get() != '\n') 
			continue;
		std::cout << "Please enter a positive number: ";
	}

	return r;
}
void revalue_props(double r, double * start, double * end) {
	double * p;
	for ( p=start; p!=end; ++p ) 
		*p *= r;
}
