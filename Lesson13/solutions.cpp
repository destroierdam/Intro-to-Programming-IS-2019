#include <iostream>
using namespace std;
void print(int * arr, int size) {
    if(size == 1) {
        cout << *arr << endl;
        return;
    }
    cout << *arr << " ";
    print(arr+1, size-1);
}

int minElem(int * arr, int size) {
    if(size == 1) {
        return *arr;
    }
    return min(*arr, minElem(arr+1, size-1));
}

bool isPowerOfTwo(int number) {
    if(number == 1) {
        return true;
    }

    return (number % 2 == 0) && isPowerOfTwo(number/2);
}

int toBinary(int number) {
    if(number == 1) {
        return 1;
    }

    return toBinary(number/2) * 10 + number % 2;
}

int biggestLocal(int * arr, int size) {
    if(size < 3) {
        return 0;
    }
    return ((arr[0] < arr[1] && arr[1] > arr[2]) + biggestLocal(arr+1, size-1));
}

void mergeSorted(int * arr1, int arr1Size, int * arr2, int arr2Size, int * arr3, int arr3Size) {
    if(arr3Size == 0) {
        return;
    }
    if(arr1Size == 0) {
        if(arr2Size == 0) {
            return;
        }
        *arr3 = *arr2;
        mergeSorted(arr1, arr1Size, arr2+1, arr2Size-1, arr3+1, arr3Size-1);
        return;
    }
    if(arr2Size == 0) {
        *arr3 = *arr1;
        mergeSorted(arr1+1, arr1Size-1, arr2, arr2Size, arr3+1, arr3Size-1);
        return;
    }
    if(*arr1 <= *arr2) {
        *arr3 = *arr1;
        mergeSorted(arr1+1, arr1Size-1, arr2, arr2Size, arr3+1, arr3Size-1);
    } else {
        *arr3 = *arr2;
        mergeSorted(arr1, arr1Size, arr2+1, arr2Size-1, arr3+1, arr3Size-1);
    }
}

int main() {
    int arr1[2] = {1, 5};
    int arr2[5] = {2, 3, 5, 5, 7};
    int arr3[6] = {0};
    
    mergeSorted(arr1, 2, arr2, 5, arr3, 6);
    for(int i = 0; i < 7; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
}
