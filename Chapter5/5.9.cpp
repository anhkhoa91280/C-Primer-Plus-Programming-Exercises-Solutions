/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190912
 * Desc: This program counts number of words entered by the user
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <string>

int main () {
	std::string words;
	std::string word = "temp";
	int i, j;
	int cnt = -1; //word count

	std::cout << "Enter words (to stop, type the word done): ";
	getline(std::cin, words);

	int len = words.size();
	words[len] = '\0';
	
	for ( int n = 0; n < len && word != "done"; n = j+1) {
		i = 0; //index for a single word
		j = n; //set current position for separate word in words
		while ( words[j] != ' ' && words[j] != '\0' ) 
			word[i++] = words[j++];
		
		word[i] = '\0';
		++cnt;
	}
	std::cout << "\nYou entered a total of " << cnt << " words" << std::endl;	

	return 0;
}
