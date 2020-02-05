#include<iostream>
using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 32;

// Exercise: Make the following two functions more generic

/// Moves first to second, second to third, third to fourth, fourth to first
void twistClockwise(int & first, int & second, int & third, int & fourth) {
	int temp = fourth;
	// Move third to fourth
	fourth = third;
	third = second;
	second = first;
	first = temp;
}

/// Moves second to first, third to second, fourth to third, first to fourth
void twistCounterclockwise(int & first, int & second, int & third, int & fourth) {
	int temp = first;
	first = second;
	second = third;
	third = fourth;
	fourth = temp;
}


void twist(int matrix[][MAX_SIZE], int rows, int cols, int n) {
	// Indices of the element in the upper left corner
	int upperLeftCornerRow = 0;
	int upperLeftCornerColumn = 0;
	
	int upperRightCornerRow = 0;
	int upperRightCornerColumn = cols-1;
	
	int lowerLeftCornerRow = rows-1;
	int lowerLeftCornerColumn = 0;
	
	int lowerRightCornerRow = rows-1;
	int lowerRightCornerColumn = cols-1;
	
	for(int i = 0; i < rows/2; i++) {
		for(int j = 0; j < n; j++) {
			if(i % 2 == 0) {
				twistClockwise(matrix[upperLeftCornerRow][upperLeftCornerColumn],
							   matrix[upperRightCornerRow][upperRightCornerColumn],
							   matrix[lowerRightCornerRow][lowerRightCornerColumn],
							   matrix[lowerLeftCornerRow][lowerLeftCornerColumn]);
			} else {
				twistCounterclockwise(matrix[upperLeftCornerRow][upperLeftCornerColumn],
									  matrix[upperRightCornerRow][upperRightCornerColumn],
									  matrix[lowerRightCornerRow][lowerRightCornerColumn],
									  matrix[lowerLeftCornerRow][lowerLeftCornerColumn]);
			}
		}
		
		upperLeftCornerRow++;
		upperLeftCornerColumn++;
		
		upperRightCornerRow++;
		upperRightCornerColumn--;
		
		lowerRightCornerRow--;
		lowerRightCornerColumn--;
		
		lowerLeftCornerRow--;
		lowerLeftCornerColumn++;
	}
}

int main() {
	int rows = 5, cols = 5;
	int matrix[MAX_SIZE][MAX_SIZE] = {  { 1, 2, 3, 4, 5 },
										{ 4, 5, 6, 7, 8 },
										{ 3, 4, 5, 9, 0 },
										{ 5, 6, 9, 1, 2 },
										{ 6, 10, 11, 0, 1} };
	
	twist(matrix, rows, cols, 3);
	
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			cout << matrix[i][j] << '\t';
		}
		cout << endl;
	}
	
	return 0;
}