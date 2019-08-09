/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190808
 * Desc: This program shows arithmetic operation modulus
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
int main()
{
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;
	std::cout << "Enter your weight in pounds: ";
	std::cin >> lbs;
	int stone = lbs / Lbs_per_stn; // whole stone
	int pounds = lbs % Lbs_per_stn; // remainder in pounds
	std::cout << lbs << " pounds are " << stone
		<< " stone, " << pounds << " pound(s).\n";
	return 0;
}
