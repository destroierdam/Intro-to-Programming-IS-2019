#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int factoriel(size_t n) {
  if(n == 0) {
    return 1;
  } // else {
    return n*factoriel(n-1);
  //}
}

int fib(int n) {
  if(n == 0) {
    return 0;
  }
  if(n == 1) {
    return 1;
  }
  return fib(n-1)+fib(n-2);
}

const int MAX_SIZE = 128;

void print(int arr[], int size) {
  if(size == 0) {
    return;
  }
  cout << arr[0] << " ";
  print(arr+1,size-1);
}

int minElem(int * arr, int size) {
  if(size == 1) {
    return arr[0];
  }
  return min(arr[0], minElem(arr+1, size-1));
}

int toBinary(int number) {
 if(number == 0) {
   return 0;
 }
 if(number == 1) {
   return 1;
 }
 return toBinary(number/2)*10 + (number%2);
}

int biggestLocal(int * arr, int size) {
  if(size < 3) {
    return 0;
  }
  return (arr[0] < arr[1] && arr[1] > arr[2]) + biggestLocal(arr+1, size-1);
}

void mergeSorted(int arr1[], int arr1Size, int arr2[], int arr2Size, int arr3[], int arr3Size) {
  if(arr3Size == 0) {
    return;
  }

  if(arr1Size == 0) {
    arr3[0] = arr2[0];
    mergeSorted(arr1, arr1Size, arr2+1, arr2Size-1, arr3+1, arr3Size-1);
  }
}

int main() {
    int arr[MAX_SIZE] = {1, 20, 3, 4, 0};
    cout << biggestLocal(arr, 5);
    cout << endl;
}
