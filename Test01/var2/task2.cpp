#include <iostream>
using namespace std;
/*
Напишете програма, която по дадени две естествени числа проверява дали има делител на първото, чийто
квадрат дели и второто число.

Примери: 6 14 -> No, 6 28 -> Yes.
*/
int main() {
	int firstNumber, secondNumber;
	bool answer = false;
	
	cin >> firstNumber >> secondNumber;
	
	for(int i = 2; i < firstNumber; i++) {
		if(firstNumber % i == 0) {
			if(secondNumber % i*i == 0) {
				answer = true;
				cout << "YES" << endl;
				break;
				
			}
		}
	}
	
	if(answer) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}