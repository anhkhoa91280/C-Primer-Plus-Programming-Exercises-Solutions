/*
 * Author: Dang Nguyen Anh Khoa
 * Date: 20190714
 * Desc: Program asking user for his/her age in year and display to the screen the age in months
 * */
#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You are " << age*12 << " months old" << std::endl;
}
