/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191010
 * Desc: This program shows the use of default argument in function.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

char * left(const char * c, int n=1);
const int LEN = 30;
int main() {
	char w[LEN];
	char * sub;

	std::cout << "Enter a string" << std::endl;
	std::cin.getline(w, LEN);

	sub = left(w, 2);
	std::cout << "Sub: " << sub << std::endl;
	delete [] sub;

	sub = left(w);
	std::cout << "Sub: " << sub << std::endl;
	delete [] sub;

	return 0;
}
char * left(const char * c, int n) {
	int i;
	char * sub = new char[n];

	if ( n<0 ) n = 0;

	for ( i=0; i<n && c[i]; ++i )
		sub[i] = c[i];
	while ( i<=n )
		sub[i++] = '\0';
	return sub;
}
