/*
 * Author: Dang Nguyen Anh Khoa
 * Date: 20190714
 * Desc: Check system integer type limits. Types are short, int, long, long long
 * Ref: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <climits>

int main() {
    short i_short = SHRT_MAX;
    int i_int = INT_MAX;
    long i_long = LONG_MAX;
    long long i_long_long = LLONG_MAX; 

    //sizeof operator yields size of type or size of variable
    std::cout << "WIDTH OF EACH TYPE: " << std::endl;
    std::cout << "short is: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "int is: " << sizeof i_int << " bytes" << std::endl;
    std::cout << "long is: " << sizeof i_long << " bytes" << std::endl;
    std::cout << "long long is: " << sizeof i_long_long << " bytes" << std::endl;
    std::cout << std::endl;

    std::cout << "MAXIMUM VALUE: " << std::endl;
    std::cout << "short: " << i_short << std::endl;
    std::cout << "int: " << i_int << std::endl;
    std::cout << "long: " << i_long << std::endl;
    std::cout << "long long: " << i_long_long << std::endl;
    std::cout << std::endl;

    std::cout << "MINIMUM VALUES: " << std::endl;
    std::cout << "bits per byte: " << CHAR_BIT << std::endl;
    std::cout << "minimum int value: " << INT_MIN << std::endl;
    std::cout << std::endl;
    return 0;
}
