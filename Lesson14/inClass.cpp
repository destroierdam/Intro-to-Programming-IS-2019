#include <iostream>
using namespace std;

void Change(int matrix[][100], int rows, int cols) {

}

void toUpper(char & c) {
	if('a' <= c && c <= 'z') {
		c -= 'a' - 'A';
	}
}

void toLower(char& c) {
	if ('A' <= c && c <= 'Z') {
		c += 'a' - 'A';
	}
}
void gaussRec(char* str, int * arr) {
	if (*str == '\0') {
		return;
	}
	if (*arr == 1) {
		toUpper(*str);
	}
	if (*arr == -1) {
		toLower(*str);
	}
	if (*arr == 0) {
		*str = '_';
	}
	gaussRec(str+1, arr+1);
}
void gaus() {
	char str[] = "Gauss-Ostrogradsky";
	int arr[] = { 1, 1, 0, 1, 0, 1, -1, -1, -1, -1, -1, 1, -1, -1, -1, 0, 1, 1 };
	gaussRec(str, arr);
	cout << str << endl;
}
int main()
{
	gaus();
	return 0;
	int rows, cols;
	int matrix[10][10];

	cin >> rows >> cols;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < cols; i++) {
		for (int k = 0; k < i; k++) {
			int firstElem = matrix[0][i];
			for (int j = 0; j < rows - 1; j++) {
				matrix[j][i] = matrix[j + 1][i];
			}
			matrix[rows - 1][i] = firstElem;
		}
	}

	cout << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}
// ----------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
/*
int main()
{
	const int MAX_ROWS = 16, MAX_COLS = 16;

	double matrix[MAX_ROWS][MAX_COLS] = { {0} }, sum = 0, MaxSum = 0;

	int rows, cols;
	cin >> rows >> cols;
	for (int i = 2; i < rows+2; i++)
	{
		for (int j = 2; j < cols+2; j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 2; i < rows + 2; i++)
	{
		for (int j = 2; j < cols + 2; j++)
		{
			sum = matrix[i][j]+matrix[i-1][j+2]+matrix[i-2][j+1]+
								matrix[i+1][j+2]+matrix[i+2][j+1]+
								matrix[i+2][j-1]+matrix[i+1][j-2]+
								matrix[i-1][j-2]+matrix[i-2][j-1];
			if (sum > MaxSum)
			{
				MaxSum = sum;
			}
		}
	}
	for (int i = 0; i < MAX_ROWS; i++)
	{
		for (int j = 0; j < MAX_COLS; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "The Max Sum is: " << MaxSum << endl;
}*/
