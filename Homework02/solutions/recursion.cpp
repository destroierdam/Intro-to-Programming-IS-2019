#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool areContained(char firstString[], char secondString[]) {
	if(firstString[0] == '\0') {
		return true;
	}
	
	for(int i = 0; secondString[i] != '\0'; i++) {
		if(firstString[0] == secondString[i]) {
			// The first character from firstString is contained in secondString.
			// Continue checking for the rest.
			return areContained(firstString+1, secondString);
		}
	}
	
	// The first character from firstString hasn't been found in secondString.
	return false;
}

int main() {
	char firstString[] = "goodbook";
	char secondString[] = "gdbok";
	
	cout << (areContained(firstString, secondString) ? "YES" : "NO") << endl;
	return 0;
}