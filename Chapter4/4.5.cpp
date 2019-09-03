/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190903
 * Desc: This program creates a structure CandyBar which has 3 members.
 * Reference: C++ Primer Plus - 6th Edition 
 * */
#include <iostream>

struct Candy_bar {
	std::string brand;
	double weight;
	int calories;
};
int main() {
	Candy_bar snack = { "Mocha Munch", 2.3, 350 };

	std::cout << "Brand name: " << snack.brand << std::endl;
	std::cout << "Weight: " << snack.weight << std::endl;
	std::cout << "Calories: " << snack.calories << std::endl;

	return 0;
}
