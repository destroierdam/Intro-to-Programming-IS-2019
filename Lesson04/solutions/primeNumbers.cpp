#include <iostream>
using namespace std;
int main()
{
	int number;
	bool flag = true;
	cin >> number;

	for (int i = 2; i*i <= number; i++) {
		if (number % i == 0) {
			cout << "NO" << endl;
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "YES" << endl;
	}
	return 0;
}