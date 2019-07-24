/*
 * Author: Dang Nguyen Anh Khoa
 * Date: 20190714
 * Desc: Program takes input as Celsius degree, and converts to Fahrenheit.
 *      The conversion should use a user-defined function.
 *      Fahrenheit = 1.8 x degrees Celsius + 32.0
 * */
#include <iostream>
double convert_celsius_to_fahrenheit(double degrees_celsius);
int main() {
    double degrees_celsius;
    std::cout << "Enter degree in celsius: ";
    std::cin >> degrees_celsius;
    std::cout << degrees_celsius << " degrees Celsius is " 
        << convert_celsius_to_fahrenheit(degrees_celsius) << " degrees Fahrenheit" << std::endl;
}
double convert_celsius_to_fahrenheit(double degrees_celsius) {
    return degrees_celsius * 1.8 + 32;
}
