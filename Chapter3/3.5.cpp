/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190813
 * Desc: This program asks for world popution and a country's population
 * 	Then calculates the percentage of the country's population to the world 
 * 	population
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	long long world_population, country_population;

	std::cout << "Enter world population: ";
	std::cin >> world_population;

	std::cout << "Enter population of the US: ";
	std::cin >> country_population;

	std::cout << "The population of the US is " 
		<< static_cast<float>(country_population) / (static_cast<float>(world_population) /100)
		<< "% of the world population" << std::endl;
	return 0;
}
