#include <iostream>
using namespace std;
void printArr(int arrToPrint[10]) {
	for(int i = 0; i < 10; i++) {
		cout << arrToPrint[i] << " ";
	}
	cout << endl;
	
	
}
	
int main() {
	int arr[10] = {20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
	printArr(arr);
	return 0;
}