/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190929
 * Desc: This program draws a ruler using multiple recursive function calls
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

void subdivide(char * ruler, int start, int end, int level);
const int LEN = 66;
const int DIV = 6; //pow(2,6) = 64, DIV: number of levels 
int main() {
	char ruler[LEN];
	ruler[LEN-1] = '\0';
	int max = LEN - 2;
	int min = 0;

	//create a blank ruler which will be used for each level
	for ( int i=1; i<max; ++i )
		ruler[i] = ' ';
	ruler[min] = ruler[max] = '|';
	std::cout << ruler << std::endl; //0th level with no '|' in the midle
	
	//with each level the ruler will be "half divided" 
	//that many times (times = level)
	for ( int i = 1; i <= DIV; ++i ) {
		subdivide(ruler, min, max, i);
		std::cout << ruler << std::endl;	
		//reset ruler with blanks again for the next level
		for ( int j=1; j<max; ++j )
			ruler[j] = ' ';
	}

	return 0;
}
void subdivide(char * ruler, int start, int end, int level) {
	if ( 0 == level )
		return;
	int mid = (start+end)/2;
	ruler[mid] = '|';
	subdivide(ruler, start, mid, level-1);
	subdivide(ruler, mid, end, level-1);
}
