/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190813
 * Desc: This program asks user to enter distance in km and petrol in liters
 * 	Then calculates European fuel consumption figure (liters per 100km)
 * */
#include <iostream>

int main() {
	float distance, petrol;

	std::cout << "Enter distance: ___\b\b\b";
	std::cin >> distance;

	std::cout << "Enter petrol: ___\b\b\b";
	std::cin >> petrol;
	
	std::cout << "Fuel consumption in European figure: " 
		<< petrol / distance* 100 << " liters/100km" << std::endl;

	return 0;
}
