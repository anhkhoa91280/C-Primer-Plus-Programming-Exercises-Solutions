/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190928
 * Desc: This program calculates time travel between 3 cities
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

struct Travel_time {
	unsigned int hours;
	unsigned int minutes;
};
Travel_time sum(Travel_time hop1, Travel_time hop2);
void show_time(Travel_time hop);
int main() {
	Travel_time hop1 = { 5, 55 };
	Travel_time hop2 = { 6, 30 };

	std::cout << "Travel time from Ha Noi-Da Nang: ";
	show_time(hop1);
	std::cout << "Travel time from Da Nang - Sai Gon: ";
	show_time(hop2);
	std::cout << "Travel time from Ha Noi-Sai Gon: ";
	show_time(sum(hop1, hop2));

	return 0;
}
Travel_time sum(Travel_time hop1, Travel_time hop2) {
	Travel_time sum;
	unsigned int minutes;
	unsigned int hours;

	minutes = hop1.minutes + hop2.minutes;
	hours = minutes/60;
	minutes = minutes%60;
	sum.hours = hours + hop1.hours + hop2.hours;
	sum.minutes = minutes;
		
	return sum;
}
void show_time(Travel_time hop) {
	std::cout << hop.hours << " hours " << hop.minutes << " minutes" << std::endl;	
}
