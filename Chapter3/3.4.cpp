/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190813
 * Desc: This program asks for seconds then display number of days, hours,
 * 	 minutes, seconds
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int SECONDS_IN_A_DAY = 86400;
	int SECONDS_IN_AN_HOUR = 3600;
	int SECONDS_IN_A_MINUTE = 60;

	unsigned long user_seconds;
	int days, hours, minutes, seconds;
	int hours_in_seconds, minutes_in_seconds;

	std::cout << "Enter the number of seconds: ";
	std::cin >> user_seconds;

	days = user_seconds / SECONDS_IN_A_DAY;

	hours_in_seconds = user_seconds % SECONDS_IN_A_DAY;
	hours = hours_in_seconds / SECONDS_IN_AN_HOUR;

	minutes_in_seconds = hours_in_seconds % SECONDS_IN_AN_HOUR;
	minutes = minutes_in_seconds / SECONDS_IN_A_MINUTE;

	seconds = minutes % SECONDS_IN_A_MINUTE;

	std::cout << user_seconds << " seconds = " << days << " days, " << hours <<
		" hours, " << minutes << " minutes, " << seconds << " seconds" 
		<< std::endl;

	return 0;
}
