#include <iostream>
#include <stdexcept>

using namespace std;
void sum(int * addrOfNumber1, int number2) {
	if (addrOfNumber1 != nullptr) {
		*addrOfNumber1 += number2;
	} else {
		throw std::logic_error("Address is nullptr"); // std::invalid_argument
	}
}

void scalMult(int arr[], int sizeOfArray, int scalar) {
	
	for(int i = 0; i < sizeOfArray; i++) {
		*arr *= scalar;
		arr++;
		
		arr[i] *= scalar;
	}
}

void scalMatrixMult(int matrix[][3], int numberOfRows, int scalar) {
	for(int i = 0; i < numberOfRows; i++) {
		for(int j = 0; j < 3; j++) {
			matrix[i][j] *= scalar;
		}
	}
}	

void mergeSorted(int firstArray[], int sizeFirstArray,
				 int secondArray[], int sizeSecondArray, 
				 int thirdAray[], int sizeThirdArray) {
	
	int firstArrayIndex = 0, secondArrayIndex = 0, thirdArrayIndex = 0;
	
	for(;firstArrayIndex < sizeFirstArray && 
		secondArrayIndex < sizeSecondArray &&
		thirdArrayIndex < sizeThirdArray; 
		thirdArrayIndex++) {
		
		if(firstArray[firstArrayIndex] < secondArray[secondArrayIndex]) {
			thirdAray[thirdArrayIndex] = firstArray[firstArrayIndex];
			firstArrayIndex++;
		} else if(firstArray[firstArrayIndex] >= secondArray[secondArrayIndex]) {
			thirdAray[thirdArrayIndex] = secondArray[secondArrayIndex];
			secondArrayIndex++;
		}
	}
	
	while(secondArrayIndex < sizeSecondArray && thirdArrayIndex < sizeThirdArray) {
		thirdAray[thirdArrayIndex] = secondArray[secondArrayIndex];
		thirdArrayIndex++;
		secondArrayIndex++;
	}
	
	while(firstArrayIndex < sizeFirstArray && thirdArrayIndex < sizeThirdArray) {
		thirdAray[thirdArrayIndex] = firstArray[firstArrayIndex];
		thirdArrayIndex++;
		firstArrayIndex++;
	}
}

int main() {
	
	int n = 7, m = 8;
	try {
		sum(nullptr, m);
	} catch (std::logic_error & ex) {
		std::cerr << ex.what() << std::endl;
	}
	std::cout << "Continue" << std::endl;
	// n == 15
	return 0;
	
	const int SIZE_OF_ARRAY = 10;
	int arr[SIZE_OF_ARRAY] = {1, 2, 3, 54, 54, 678, 876, 1231, 98765, 899976};
	int threeElem[] = {1, 2, 3};
	scalMult(arr, SIZE_OF_ARRAY, 2);
	/*
	for(int i = 0; i < SIZE_OF_ARRAY; i++) {
		cout << arr[i] << " ";
	}
	*/
	//scalMult(threeElem, 3);
	
	const int MAX_ROWS = 2, MAX_COLS = 3;
	
	int matrix[MAX_ROWS][MAX_COLS] = {{1, 2, 3}, {4, 5, 6}};
	
	scalMatrixMult(matrix, 2, 10);
	/*
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	*/
	
	int resultOfMerge[100];
	mergeSorted(arr, SIZE_OF_ARRAY, threeElem, 3, resultOfMerge, 100);
	for(int i = 0; i < SIZE_OF_ARRAY + 3; i++) {
		cout << resultOfMerge[i] << " ";
	}
	return 0;
}