#include <iostream>
using namespace std;
int main()
{
	int number;
	int sum = 0;
	cin >> number;
	
	while(number)
	{
		sum += number % 10;
		number /= 10;
	}
	
	cout << sum << endl;
	return 0;
}