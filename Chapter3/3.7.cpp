/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190813
 * Desc: This program asks user to enter distance_in_km in km and petrol_in_liters in liters
 * 	Then converts fuel consumption figures to US mpg (miles per gallon)
 * */
#include <iostream>

int main() {
	float distance_in_km, petrol_in_liters;
	float distance_in_miles, petrol_in_gallons;

	const float KM_TO_MILES = 0.6214;
	const float GALLONS_TO_LITERS = 3.875;

	std::cout << "Enter distance in kms: ___\b\b\b";
	std::cin >> distance_in_km;

	std::cout << "Enter petrol in liters: ___\b\b\b";
	std::cin >> petrol_in_liters;
	
	std::cout << "Fuel consumption in European figure: " 
		<< petrol_in_liters / distance_in_km* 100 << " liters/100km" << std::endl;
	
	//Convert distance from km to miles
	distance_in_miles = distance_in_km * KM_TO_MILES;
	//Convert petrol from liters to gallons
	petrol_in_gallons = petrol_in_liters / GALLONS_TO_LITERS;

	std::cout << "Fuel consumption in US figure: " 
		<< static_cast<int>(distance_in_miles / petrol_in_gallons) << " mpg" 
		<< std::endl;

	return 0;
}
