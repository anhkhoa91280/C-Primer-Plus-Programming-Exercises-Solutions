/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190813
 * Desc: This program asks user to enter distance in km and petrol in liters
 * 	Then calculate liters per 100km
 * */
#include <iostream>

int main() {
	float distance, petrol;

	std::cout << "Enter distance: ___\b\b";
	std::cin >> distance;

	std::cout << "Enter petrol: ___\b\b";
	std::cin >> petrol;
	
	std::cout << "Liters per 100km is: " 
		<< petrol / distance* 100
		<< std::endl;

	return 0;
}
