/*
 * Author: Dang Nguyen Anh Khoa
 * Date: 20190714
 * Desc: Program asks user for time and minute and display as hh : mm. 
 *  The program should use a user-defined function that returns void.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
void print_hours_mins(int hours, int minutes);
int main() {
    int hours, minutes;
    std::cout << "Enter hours: ";
    std::cin >> hours;
    std::cout << "Enter minutes: ";
    std::cin >> minutes;

    print_hours_mins(hours, minutes);
    return 0;
}
void print_hours_mins(int hours, int minutes) {
    std::cout << hours << ":" << minutes << std::endl;
}
