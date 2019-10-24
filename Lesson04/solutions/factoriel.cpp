#include <iostream>
using namespace std;
int main()
{
	int number;
	int factoriel = 1;
	cin >> number;
	
	
	for (int i = 1; i <= number; i++) {
		factoriel *= i;
	}
	
	// Alternatives:
	
	/*
	int i = 1;
	while (i <= number) {
		factoriel *= i;
		i++;
	}
	*/
	
	/*
	while (number > 0) {
		factoriel *= number;
		number--;
	}
	*/

	/*
	// Doesn't work fo 0!
	do
	{
		factoriel *= number;
		number--;

	} while (number > 0);
	*/
	
	cout << factoriel << endl;
	return 0;
}