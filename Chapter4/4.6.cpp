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
	Candy_bar * snack = new Candy_bar[3];

	snack[0] = { "Potato Chips", 0.5, 200 };
	*(snack+1) = { "Fish Cake", 0.3, 300};
	*(snack+2) = { "Corn", 0.6, 450};

	std::cout << "Brand name: " << snack[0].brand << std::endl;
	std::cout << "Weight: " << snack[0].weight << std::endl;
	std::cout << "Calories: " << snack[0].calories << std::endl;
	std::cout << std::endl;

	std::cout << "Brand name: " << snack[1].brand << std::endl;
	std::cout << "Weight: " << snack[1].weight << std::endl;
	std::cout << "Calories: " << snack[1].calories << std::endl;
	std::cout << std::endl;

	std::cout << "Brand name: " << snack[2].brand << std::endl;
	std::cout << "Weight: " << snack[2].weight << std::endl;
	std::cout << "Calories: " << snack[2].calories << std::endl;
	std::cout << std::endl;

	return 0;
}
