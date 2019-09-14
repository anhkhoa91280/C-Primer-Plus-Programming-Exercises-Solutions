/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190911
 * Desc: This program shows car collection management
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

struct Car {
	std::string make;
	int year;
};
int main () {
	int n;

	std::cout << "How many cars in your collection? ";
	(std::cin >> n).get();
	std::cout << std::endl;

	Car * cars[n];

	for ( int i = 0; i < n; i++ ) {
		cars[i] = new Car;
		std::cout << "Enter car make: ";
		getline(std::cin, cars[i]->make);
		std::cout << "Enter the year the car was built: ";
		(std::cin >> cars[i]->year).get();
		std::cout << std::endl;
	}

	std::cout << "Here is your collection: " << std::endl;
	for ( Car * car : cars ) {
		std::cout << car->year << ": " << car->make << std::endl;
		delete car;
	}

	return 0;
}
