#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

void capitalize(char & c) {
	if('a' <= c && c <= 'z') {
		c = c - 'a' + 'A';
	}
}

void makeGivenCapital(char str[], char capitalChars[]) {
	for(int i = 0; str[i] != '\0'; i++) {
		for(int j = 0; capitalChars[j] != '\0'; j++) {
			if(str[i] == capitalChars[j]) {
				capitalize(str[i]);
				// We have found the character. No need to look further in capitalChars.
				break;
			}
		}
	}
}

int main() {
	char str[] = "goodbOOk";
	char capitals[] = "bdo";
	
	makeGivenCapital(str, capitals);
	
	cout << str << endl;
	return 0;
}
