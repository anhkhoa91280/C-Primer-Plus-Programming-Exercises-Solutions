/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191017
 * Desc: This program illustrates how the compiler picks a candidate declaration for
 * overload resolution.
 * Reference: C++ Primer Plus - 6th Edition. 
 * */
#include <iostream>

void may(int);					//#1
float may(float, float=3);		//#2
void may(char);					//#3
char * may(const char *);		//#4
//char may(const char &);			//#5
template<class T> void may(const T&);//#6
template<class T> void may(T*);		//#7
int main() {
	may('B'); //type char
}
//#1
void may(int x) {
	std::cout << "Function 1, with value: " << x << std::endl;
}
//#2
float may(float x, float y) {
	std::cout << "Function 2, 2 floats, x+y = " << x + y << std::endl;
	return x+y;
}
//#3
void may(char c) {
	std::cout << "Function 3, ASCII value of c is: " << static_cast<int>(c) 
	   << std::endl;	
}
//#4
char * may(const char * pc) {
	char * p = nullptr;
	*p = *pc;
	std::cout << "Function 4, value of p is: " << *p << std::endl;
	return p;
}
//#3 and #5 are exact match and will cause an error.
//#5
/*char may(const char & rc) {
	std::cout << "Function 5, value of rc: " << rc << std::endl;
	return rc;
}*/
//#6
template<class T> void may(const T& x) {
	std::cout << "Function 6, value of x: " << x << std::endl;
}
//#7
template<class T> void may(T* x) {
	std::cout << "Function 7, value of x; " << *x << std::endl;
}

