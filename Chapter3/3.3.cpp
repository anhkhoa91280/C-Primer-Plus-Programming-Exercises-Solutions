/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190813
 * Desc: This program asks for latitude in degrees, minutes, and seconds.
 * 	It then converts all to degrees
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	const int factor = 60;
	float degrees, minutes;
	int seconds;
	std::cout << "Enter latitude in degress, minutes, and seconnds: " << std::endl;
	std::cout << "Enter the degress: ";
	std::cin >> degrees; 
	std::cout << "Enter the minutes of arc: ";
	std::cin >> minutes;
	std::cout << "Enter the seconds of arc: ";
	std::cin >> seconds;

	//Calculate total number of minutes
	//minutes  = minutes + static_cast<float>(seconds)/factor;

	//Calculate total number of degrees
	//degrees = degrees + minutes/factor;

	std::cout << degrees << " degrees, " << minutes << " minutes, " << 
	   seconds << " seconds = " 
	   << degrees + (minutes + static_cast<float>(seconds)/factor)/factor;
	
	std::cout << std::endl;
	
	return 0;
}
