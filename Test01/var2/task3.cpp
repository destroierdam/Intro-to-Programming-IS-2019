#include <iostream>
using namespace std;
/*
Напишете програма, която по въведено нечетно число n, извежда успоредник заедно с две от височините му.

n = 3:

  * * * * * *
 **       **
* * * * * *

n = 5:

    * * * * * * * * * *
   **             *  *
  * *             * *
 *  *             **
* * * * * * * * * *

*/
int main() {
	int n;
	cin >> n;
	// First row
	for(int i = 1; i <= n-1; i++) {
		cout << " ";
	}
	for(int i = 1; i <= 2*n; i++) {
		cout << "* ";
	}
	cout << endl;
	
	int firstStar = n-1;
	int secondStar = n;
	int thirdStar = 4*n - 1;
	int fourthStar = 5*n -3;
	
	for(int i = 1; i <= n-2; i++) {
		for(int j = 1; j <= 5*n - 3; j++) {
			if(j == firstStar || j == secondStar || j == thirdStar || j == fourthStar) {
				cout<< "*";
			} else {
				cout << " ";
			}
		}
		firstStar--;
		fourthStar--;
		cout << endl;
	}
	// Last row
	for(int i = 1; i <= 2*n; i++ ) {
		cout << "* ";
	}
	cout<< endl;
}