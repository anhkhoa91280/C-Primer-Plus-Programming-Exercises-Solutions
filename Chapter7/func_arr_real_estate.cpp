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

int fill_props(double * prop, int n);
void show_props(const double * prop, int n);
double get_revalue_rate();
void revalue_props(double r, double * prop, int n);
const int MAX = 5;
int main() {
	double props[MAX] {0};
	int props_with_prices;
	double revalue_rate;

	props_with_prices = fill_props(props, MAX);
	show_props(&props[0], props_with_prices);
	
	std::cout << std::endl;
	revalue_rate = get_revalue_rate();
	revalue_props(revalue_rate, props, props_with_prices);
	show_props(&props[0], props_with_prices);

	return 0;
}
int fill_props(double * prop, int n) {
	int i;
	double price;

	std::cout << "Plz provide prices for properties, enter a negative "
		"value to end the provision." << std::endl;
	for ( i=0; i<n; ++i ) {
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
			prop[i] = price;
	}
	return i;
}
void show_props(const double * prop, int n) {
	for ( int i=0; i<n; ++i )
		std::cout << "Price of prop #" << i+1 << " is: " << prop[i] << std::endl;
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
void revalue_props(double r, double * prop, int n) {
	for ( int i=0; i<n; ++i ) 
		prop[i] *= r;
}
