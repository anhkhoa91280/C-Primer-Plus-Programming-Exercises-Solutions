/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190909
 * Desc: This program shows nested for loop 
 * Reference: C++ Primer Plus
 * */
#include <iostream>

int main () {
	const int n_cities = 3;
	const int n_years = 5;
	const char * cities[n_cities] = {
		"Ha Noi",
		"Saigon",
		"Danang"
	};

	int temps[n_years][n_cities] = {
		{ 37, 38, 29 },
		{ 32, 33, 26 },
		{ 35, 29, 25 },
		{ 40, 30, 27 },
		{ 41, 35, 30 }
	};
	
	std::cout << "Highest temparatures of Hanoi, Saigon, Danang from 2015-2019: "
		<< std::endl;
	std::cout << "Cities" << "\t";
	for ( int year : { 2015, 2016, 2017, 2018, 2019 } ) 
		std::cout << year << "\t";
	std::cout << std::endl;
	for ( int city = 0; city < n_cities; ++city ) {
		std::cout << cities[city] << "\t";
		for ( int year = 0; year < n_years; ++year )
			std::cout << temps[year][city] << "\t";
		std::cout << std::endl;
	}

	return 0;
}
