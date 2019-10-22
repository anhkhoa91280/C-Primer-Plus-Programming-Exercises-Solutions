/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191021
 * Desc: This program creates a struct to hold a string and the length of the
 * string, a struct gets its data from a string entered by the user.
 * Reference: C++ Primer Plus - 6th Edition.
 * */
#include <iostream>
#include <cstring>

struct Stringy {
	char * str;
	int cnt;
};

void set(Stringy &, char *);
void show(const Stringy &, int n=1);
void show(const char * c, int n=1);
int main() {
	Stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);

	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);

	return 0;
}
void set(Stringy & s, char * c) {
	const int len = strlen(c);
	s.str = new char[len];
	strcpy(s.str, c);
	s.cnt = len;
}
void show(const Stringy & s, int n) {
	for ( int i=0; i<n; ++i )
		std::cout << "Stringy: " << s.str << ", length: " << s.cnt << std::endl;
}
void show(const char * c, int n) {
	for ( int i=0; i<n; ++i )
		std::cout << "Testing: " << c << std::endl;
}
