#include <iostream>
using std::cout;
using std::endl;

void sum(int * pointerToA, int b) {
	*pointerToA = *pointerToA + b;
}
void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int* findElementInArray(int arr[], int sizeOfArray, int findNumber) {
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (arr[i] == findNumber) {
			return &arr[i];
		}
	}
	return nullptr;
}
void reverse(int arr[], int sizeOfArray) 
{
	for  (int i = 0; i < sizeOfArray/2; i++)
	{
		swap(&arr[i], &arr[sizeOfArray - i - 1]);
	}
}

const int ROWS = 2, COLS = 3;
void multiplyMatrixWithScalar(int matrix[][COLS], int rows, int cols, int scalar) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] *= scalar;
		}
	}
}

// MARK: Testing functions

void testSum() {
	int firstNumber = 10, secondNumber = 7;
	cout << "Before sum:\n";
	cout << "First number: " << firstNumber << ", second number: " << secondNumber << endl;
	sum(&firstNumber, secondNumber);
	cout << "After sum(second number should be added to first number):\n";
	cout << "First number: " << firstNumber << ", second number: " << secondNumber << endl;
}

void testSwap() {
	int firstNumber = 10, secondNumber = 7;
	cout << "Before swap:\n";
	cout << "First number: " << firstNumber << ", second number: " << secondNumber << endl;
	swap(&firstNumber, &secondNumber);
	cout << "After swap:\n";
}

void testFindElementInArray() {
	const int SIZE_OF_ARRAY = 5;
	int arr[SIZE_OF_ARRAY] = { 2, 5, 0, 7, 9 };
	
	// test 1
	int findNumber = 5;
	cout << "Find number " << findNumber << '\n';
	int * pointerToElement = findElementInArray(arr, SIZE_OF_ARRAY, findNumber);
	cout << "Pointer to element(should be equal to " << &arr[1] << " ): " << pointerToElement << '\n';
	
	// test 2
	findNumber = 99;
	cout << "Find number " << findNumber << '\n';
	pointerToElement = findElementInArray(arr, SIZE_OF_ARRAY, findNumber);
	cout << "Pointer to element(should be equal to 0): " << pointerToElement << '\n';

	// Something interesting
	// arr[2]; // <=> *(arr + 2) <=> *(2 + arr) <=> 2[arr]
}

void printArray(int * arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void testReverse() {
	const int SIZE_OF_ARRAY = 5;
	int arr[SIZE_OF_ARRAY] = { 2, 5, 0, 7, 9 };
	cout << "Before reverse: ";
	printArray(arr, SIZE_OF_ARRAY);
	reverse(arr, SIZE_OF_ARRAY);
	cout << "After reverse: ";
	printArray(arr, SIZE_OF_ARRAY);
}

void printMatrix(int matrix[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << '\n';
	}
}

void testMultiplyMatrixWithScalar() {
	int matrix[ROWS][COLS] = { {1, 2, 3},
   							   {4, 5, 6} };
	int scalar = 10;
	
	cout << "Before multiplication:" << '\n';
	printMatrix(matrix);
	multiplyMatrixWithScalar(matrix, ROWS, COLS, scalar);
	cout << "After multiplication(should be multiplied by " << scalar << "):" << '\n';
	printMatrix(matrix);
}

int main()
{
	return 0;
}
