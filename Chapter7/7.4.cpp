/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20191003
 * Desc: This program calculate lottery odd through 5 picks from 1-47 and 1 super 
 * 	ball from 1-27
 * Reference: C++ Primer Plus	
 * */
#include <iostream>
double draw_balls(int range, int picks);
int main() {
	
	//std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout << "You have 1 chance in " 
		<< draw_balls(47, 5) * draw_balls(21, 1) << " of winning." << std::endl;

	return 0;
}
double draw_balls(int range, int picks) {
	double prob = 1.0;
	for ( int i=range, j=picks; j>0; i--, j--) 
	   	prob *= i/j;
	return prob;
}
