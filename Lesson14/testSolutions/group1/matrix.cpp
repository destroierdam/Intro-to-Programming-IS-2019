#include <iostream>
using namespace std;
int main() {
    const int MAX_SIZE = 64;
    double matrix[MAX_SIZE][MAX_SIZE] = {{0}};
    int rows, cols;

    cin >> rows >> cols;
    for(int i = 2; i < rows+2; i++) {
        for(int j = 2; j < cols+2; j++) {
            cin >> matrix[i][j];
        }
    }

    double maxSum = 0;

    for(int i = 2; i < rows+2; i++) {
        for(int j = 2; j < cols+2; j++) {
            double sum = matrix[i][j] + matrix[i-2][j+1] + matrix[i-1][j+2] +
                                        matrix[i+1][j+2] + matrix[i+2][j+1] +
                                        matrix[i+2][j-1] + matrix[i+1][j-2] +
                                        matrix[i-1][j-2] + matrix[i-2][j-1];
            if(maxSum < sum) {
                maxSum = sum;
            }
        }
    }

    cout << maxSum << endl;
}
