#include <iostream>
using namespace std;
/*
Напишете програма, която да извежда на n реда трапец по следния начин:

n = 5:

    * * * * *
   * *     * *
  *   *   *   *
 *     * *     *
* * * * * * * * *

n = 6:

     * * * * * *
    * *       * *
   *   *     *   *
  *     *   *     *
 *       * *       *
* * * * * * * * * * *

*/
int main() {
	int n;
	cin >> n;
	// First row
	for(int i = 1; i <= n-1; i++) {
		cout << " ";
	}
	for(int i = 1; i <=  n; i++) {
		cout << "* ";
	}
	cout << endl;
	
	int firstStar = n-1;
	int secondStar = n+1;
	int thirdStar = 3*n - 3;
	int fourthStar = thirdStar + 2;
	
	for(int i = 1; i <= n-2; i++) {
		for(int j = 1; j <= 4*n-3; j++) {
			if(j == firstStar || j == secondStar || j == thirdStar || j == fourthStar) {
				cout<< "*";
			} else {
				cout << " ";
			}
		}
		firstStar--;
		secondStar++;
		thirdStar--;
		fourthStar++;
		cout << endl;
	}
	// Last row
	for(int i = 1; i <= 2*n - 1; i++ ) {
		cout << "* ";
	}
	cout<< endl;
}