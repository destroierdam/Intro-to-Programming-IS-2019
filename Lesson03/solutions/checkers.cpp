#include <iostream>
using namespace std;
int main () {
	int numberOfCheckers;
	
	cin >> numberOfCheckers;
	
	if (numberOfCheckers % 4 == 0) {
		cout << "YES" <<endl;
	} else {
		return 0;
	}
	return 0;
}