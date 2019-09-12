/*
 * Name: Dang Nguyen Anh Khoa
 * Date: 20190912
 * Desc: This program counts number of words entered by the user
 * Reference: C++ Primer Plus - 6th Edition
 * */
#include <iostream>
#include <cstring>

int main () {
	const int LEN = 1024;
	const int SIZE = 128;
	char words[LEN];
	char word[SIZE] = "";
	int i, j;
	int cnt = -1; //word count

	std::cout << "Enter words (to stop, type the word done): ";
 	(std::cin.get(words, LEN)).get();

	int len = strlen(words);
	for ( int n = 0; n < len && strcmp(word, "done") != 0; n = j+1) {
			i = 0; //index for a single word
			j = n; //set current position for separate word in words
			while ( words[j] != ' ' ) {
				word[i++] = words[j++];
			}
			word[i] = '\0';
			++cnt;
	}
	std::cout << "\nYou entered a total of " << cnt << " words" << std::endl;	

	return 0;
}
