#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int reversedN = 0;
    int nOriginal = n;
    while (n) {
        reversedN *= 10;
        reversedN += n % 10;
        n /= 10;
    }
    if (nOriginal == reversedN) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    cout << endl;
}
