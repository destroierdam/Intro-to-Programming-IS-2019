#include <iostream>
using namespace std;
int main()
{
	int a, n;
	
	// Two loops
	int result = 0;
	cin >> a >> n;

	for (int j = 0; j <= n; j++) {

		int member = 1;
		for (int i = 1; i <= j; i++) {
			member *= a;
		}
		result += member;
	}
	
	// One loop
	/*
	int result = 1;
	int pow = 1;
	cin >> a >> n;
	for (int i = 1; i <= n; i++)
	{
		pow *= a;
		result += pow;
	}
	*/
	
	cout << result << endl;
	return 0;
}