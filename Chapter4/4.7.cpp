/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190903
 * Desc: This program records pizza using structure
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

struct Pizza {
	std::string company;
	int diameter;
	double weight;
};
int main() {
	Pizza p;
	std::cout << "Enter pizza company: ";
	std::cin >> p.company;
	std::cout << "Enter diameter: ";
	std::cin >> p.diameter;
	std::cout << "Enter weight: ";
	std::cin >> p.weight;

	std::cout << "Name: " << p.company << ", Diameter: " << p.diameter
   		<< ", Weight: " << p.weight << std::endl;

	return 0;
}
