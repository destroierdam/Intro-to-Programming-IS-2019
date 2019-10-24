#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int number;
	do
	{
		cin >> number;
		sum += number;
	}
	while(number != 0);
	cout << sum << endl;
	return 0;
}