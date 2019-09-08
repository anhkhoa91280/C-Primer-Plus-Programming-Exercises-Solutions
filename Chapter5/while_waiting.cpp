/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190908
 * Desc: This program shows how to do a waiting clock using a while loop
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	int wait = 0;
	long long elapsed = 1e9;
	while ( wait++ <  elapsed);
	std::cout << "Finished waiting" << std::endl;

	return 0;
}
