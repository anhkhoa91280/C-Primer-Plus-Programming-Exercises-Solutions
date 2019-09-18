/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190918
 * Desc: This program shows break and continue in a loop
 * Test text: Let's do lunch today. You can pay!
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>

int main() {
	const int SIZE = 128;
	char line[SIZE];
	int i = -1;
	int spaces = 0;

	std::cout << "Enter a line of text: ";
	std::cin.get(line, SIZE);

	std::cout << "Whole line: " << std::endl;
	std::cout << line << std::endl;
	
	std::cout << "\nFirst sentence: " << std::endl;
	while ('\0' != line[++i]) {
		std::cout << line[i];
		if ('.' == line[i]) break;
		if (line[i] != ' ') continue;
		++spaces;
	}

	std::cout << "\nIn the first sentence, there are: " << spaces << " spaces." 
		<< std::endl;

	return 0;
}
