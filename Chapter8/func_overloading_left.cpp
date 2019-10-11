/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191010
 * Desc: This program shows the use of function overloading for functions with the
 * 	same business purpose but require different algorithms to implement.
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

unsigned long left(const long & num, int & lim);
char * left(const char * c, int n=1);
const int LEN = 30;
int main() {
	/*char w[LEN];
	char * sub;

	std::cout << "Enter a string" << std::endl;
	std::cin.getline(w, LEN);

	sub = left(w, 2);
	std::cout << "Sub: " << sub << std::endl;
	delete [] sub;

	sub = left(w);
	std::cout << "Sub: " << sub << std::endl;
	delete [] sub;*/

	long num, new_num;
	int lim;
	std::cout << "Enter a number: ";
	std::cin >> num;
	std::cout << "Enter number of left digits: ";
	std::cin >> lim;
	new_num = left(num, lim);
	std::cout << "New number: " << new_num << std::endl;	

	return 0;
}
unsigned long left(const long & num, int & lim) {
	long new_num = num;
	long temp = num;
	int cnt = 1; //number of digits in the number.
	int lops_num; //number to be lopped off from the right end of original number.

	while (temp /= 10)
		++cnt;

	if (lim <= 0)	lim = 1;
	lim = (lim >= cnt) ? cnt : lim;

	lops_num = cnt - lim;
	while(lops_num--) {
		new_num /= 10;
	}

	return new_num;
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
