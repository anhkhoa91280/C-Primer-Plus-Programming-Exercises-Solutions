/*
 * Author: Dang Nguyen Anh Khoa
 * Date: 20190713
 * Desc: Program using 2 user-defined function and produces the following output:
 *      Three blind mice
 *      Three blind mice
 *      See how they run
 *      See how they run
 * */
#include <iostream>
void print_mice();
void print_how_mice_run();
int main() {
    //describe blind mice and how they run
    print_mice();
    print_mice();
    print_how_mice_run();
}
void print_mice(){
    std::cout << "Three blind mice" << std::endl;
}

void print_how_mice_run() {
    std::cout << "See how they run" << std::endl;
}
