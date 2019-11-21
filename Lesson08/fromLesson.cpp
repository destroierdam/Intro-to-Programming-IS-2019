#include<iostream> 
using namespace std;
int main() {
	// Принтиране на главен диагонал
	const int MAX_ROWS = 10, MAX_COLS = 20;
	int matrix[MAX_ROWS][MAX_COLS];
	
	int rows, cols;
	cin >> rows >> cols;
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
	/*
	for(int i = 0; i < rows && i < cols; i++) {
		cout << matrix[i][i] << " ";
	}
	*/
	
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			if(i > j) { // i == cols - j - 1 за вторичен диагонал, i > j за под главния диагонал, i < j за над главния диагонал
				cout << matrix[i][j] << " ";
			}
		}
		cout << endl;
	}
	
	/*
	// Прочитане и извеждане на масив
	int rows, cols;
	cin >> rows >> cols;
	
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
	
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	*/
	
	/*
	// От едно множество от цели числа направете всички негови двуелементни подмножества.
	
	const int SIZE = 100000;
	int arr[SIZE];

	int size;
	cin >> size;
	for(int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for(int i = 0; i < size; i++) {
		for(int j = i+1; j < size; j++) {
			cout << "{" << arr[i]<<", " <<arr[j]<<"}, ";
		}
	}
	cout << endl;
*/
/*
	// От клавиатурата се въвеждат N числа. Проверете дали редицата е симетрична.
	
	const int SIZE = 100000;
	int arr[SIZE];
	bool isSymmetric = true;
	int size;
	cin >> size;
	
	for(int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for(int i = 0, j = size - 1; i <= j; i++, j--) {
		if(arr[i] != arr[j]) {
			isSymmetric = false;
		}
	}
	if(isSymmetric) {
		cout << "Symmetric";
	} else {
		cout << "Not symmetric";
	}
	cout << endl;
	
	
	*/
	
	
	/*
	
	// От клавиатурата се въвежда едно число. 
	// Пребройте броя на всяка една от различните цифри, които има в числото.

	const int SIZE = 10;
	int arr[SIZE] = {0};
	
	
	int number;
	cin >> number;
	
	while(number != 0) {
		int digit = number % 10;
		arr[digit]++;
		
		number /= 10;
	}
	
	for(int i = 0; i < SIZE; i++) 
	{
		cout << i << "-th digit is encountered " << arr[i] << " times." << endl;
	}
	*/
	
	
	/*
	// От клавиатурата се въвеждат N числа. Да се изведат в обратен ред.
	const int MAX_SIZE = 100000;
	int arr[MAX_SIZE];
	
	int size;
	cin >> size;
	for(int i = 1; i <= size; i++) {
		cin >> arr[i];
	}
		
	for(int i = size; i >= 1; i--) {
		cout << arr[i] << " ";
	}
	cout << endl;
	*/
}


/*











































/*
const int SIZE = 6;
	int arr[7] = {10, 4, 3, 4, 6, 0, -1231331};
	*/