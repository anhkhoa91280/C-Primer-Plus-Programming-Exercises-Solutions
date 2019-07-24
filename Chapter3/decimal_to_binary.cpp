#include <iostream>
#include <vector>

int main() {
	int d_num;
	std::vector<int> i_vec;
	int cnt = 0;
	char c = 'y';
    
	while(c == 'y' || tolower(c) == 'y') {
		std::cout << "Enter a decimmal number: " << std::endl;
		std::cin >> d_num;
		
		while((d_num/2) != 0) {
			if(d_num%2 != 0)
				i_vec.push_back(1);		
			else
				i_vec.push_back(0);

			d_num = d_num/2;
		}
		//1 always has remainder of 1
		i_vec.push_back(1);		

		while(i_vec.size() % 4 != 0) 
			i_vec.push_back(0);

		while(!i_vec.empty()) {
			std::cout << i_vec.back();
			i_vec.pop_back();

			if(++cnt == 4) {
				std::cout << " ";
				cnt = 0;	
			}
		}
		std::cout << std::endl;
		std::cout << "Continue? (y/n) ";
		std::cin >> c;
		std::cout << std::endl;
	}
}
