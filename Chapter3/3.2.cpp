/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190812
 * Desc: This program asks for height in feet and inches, and weight in pounds.
 * 	Then converts height to meters, and weight to kg
 * 	Finally, it calculate BMI index (BMI = Mass/Height^2)
 * */
#include <iostream>
#include <cmath>

int main() {
	const int FEET_TO_INCHES = 12;
	const double INCHES_TO_METERS = 0.0254f;
	int height_in_feet;
	int height_in_inches;
	float height_in_meters;

	const float POUNDS_TO_KG = 2.2;
	int weight_in_pounds;
	float weight_in_kg;


	std::cout << "Enter your height in feet and inches: " << std::endl;
	std::cout << "Feet: _____\b\b\b";
	std::cin >> height_in_feet;
	std::cout << "Inches: _____\b\b\b";
	std::cin >> height_in_inches;
	
	std::cout << "Enter your weight in pounds: _____\b\b\b\b";
	std::cin >> weight_in_pounds;

	//Convert height to inches
	height_in_inches = height_in_feet*FEET_TO_INCHES + height_in_inches;
	//Convert height from inches to meters
	height_in_meters = height_in_inches * INCHES_TO_METERS; 

	//Convert weight to kg
	weight_in_kg = weight_in_pounds / POUNDS_TO_KG;

	std::cout << "Your height in meter is: " << height_in_meters << std::endl;
	std::cout << "Your weight in kg is: " << weight_in_kg << std::endl;

	std::cout << "Your BMI index is: " << weight_in_kg / pow(height_in_meters, 2);
	std::cout << std::endl;

	return 0;
}
