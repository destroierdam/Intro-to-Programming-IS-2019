#include <iostream>
using namespace std;

int sumAB;

void sum(int firstNumber, int secondNumber) {
	sumAB = firstNumber + secondNumber;
}

void increaseByOne(int firstNumber) {
	firstNumber++;
}

void swapInts(int * addressOfA, int * addressOfB) {
	int temp = *addressOfA;
	*addressOfA = *addressOfB;
	*addressOfB = temp;
}

int main() {
	int a = 5, b = 7;
	
	swapInts(&a, &b);
	
	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
	
	
	const int SIZE = 10;
	
	const int * addrOfSIZE = &SIZE;
	
	
	int * const ADDRESS_OF_A = &a;
	
	ADDRESS_OF_A = &b; // will not compile
	return 0;
}



