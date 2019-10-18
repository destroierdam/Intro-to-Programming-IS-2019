#include <iostream>
using namespace std;
int main() {
	
	int a, b, c;
	
	if ((a < b + c) && (b < a + c) && (c < a + b)) {
		cout << "It exists" << endl;
	} else {
		cout << "It doesn't exist" << endl;
	}
	return 0;
}