/*
 * Author: Dang Nguyen Anh Khoa
 * Date: 20190714
 * Desc: Program converts light years into astronomical units. 1 light year = 63240 astronomical units.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
double light_years_to_astronomical(double light_years);
int main() {
    double light_years;
    std::cout << "Enter number of light years: ";
    std::cin >> light_years;
    std::cout << light_years << " light years = " << light_years_to_astronomical(light_years) 
        << " astronomical units" << std::endl;
    return 0;
}

double light_years_to_astronomical(double light_years) {
    return light_years * 63240;
}
