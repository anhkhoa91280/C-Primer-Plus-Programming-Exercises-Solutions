/*
 * Author: Dang Nguyen Anh Khoa
 * Date: 20190713
 * Desc: Converts distance from furlongs to yards (1 furlong = 220 yards)
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
    int distance_in_furlongs;
    std::cout << "Enter a distance in furlong: ";
    std::cin >> distance_in_furlongs;
    std::cout << distance_in_furlongs<< " furlongs = " << distance_in_furlongs*220 << " yards" << std::endl;
}
