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
char * left(const char * s, int n) {
	int i;
	int m = 0;

	if ( n<0 ) n = 0;

	while ( m<n && s[m] != '\0' )
		m++;
	char * sub = new char[m+1];

	for ( i=0; i<m && s[i]; ++i )
		sub[i] = s[i];
		
	sub[i] = '\0';

	return sub;
}
