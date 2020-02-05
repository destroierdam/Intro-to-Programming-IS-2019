#include<iostream>
using std::cin;
using std::cout;
using std::endl;

bool isAlpha(char c) {
	return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

/// Returns the length of the first word in the string
int lengthOfFirstWord(char * str) {
	int length = 0;
	
	for(int i = 0; isAlpha(str[i]); i++) {
		length++;
	}
	return length;
}

char * longestWord(char * str) {
	int maxWordLenght = 0;
	char * longestWord = nullptr;
	
	for(int i = 0; str[i] != 0; i++) {
		int length = lengthOfFirstWord(str+i);
		if(length > maxWordLenght) {
			maxWordLenght = length;
			longestWord = str + i;
		}
		
		// Optional; skips the entire word, makes the code run faster
//		if(length > 0) {
//			//We skip the word
//			i += length;
//		}
	}
	return longestWord;
}

/// Helper function, not needed for the homework.
/// Prints the first word in the string.
/// Neat example of recursion.
void printFirstWord(char * str) {
	if(!isAlpha(str[0])) {
		return;
	}
	
	cout << str[0];
	printFirstWord(str+1);
}

int main() {
	// Backslashes at the end ignore the new line. Makes it easier to read
	char str[] = "Padna chudna liatna nosht, prohladna i svezha.\
Bezkrainoto Trakiisko pole potuna v mraka, siakash izchezna, \
i se predade na dulboka pochivka pod monotonnia napev na zhabi i shturci.";

	char * beginningOfLongestWord = longestWord(str);
	
	// Makes it easier to see the word
	printFirstWord(beginningOfLongestWord);
	
	cout << endl;
	return 0;
}
/*
Падна чудна лятна нощ, прохладна и свежа. Безкрайното Тракийско
поле потъна в мрака, сякаш изчезна, и се предаде на дълбока почивка под
монотонния напев на жаби и щурци.
*/