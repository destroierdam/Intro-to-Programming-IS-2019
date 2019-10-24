#include <iostream>
using namespace std;
int main()
{
	int a, n;
	int result = 0;
	cin >> a >> n;
	
	for (int i = 1; i <= n; i++) {
		result *= a;
	}
	
	cout << result << endl;
	return 0;
}