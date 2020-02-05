#include <iostream>
using namespace std;

// <pyramid>
void pyramidRow(int from, int to) {
  if(from < to) {
    return;
  }
  cout << from << " ";
  pyramidRow(from-1, to);
}

void pyramidHelper(int n, int to) {
  if(to == 0) {
    return;
  }
  pyramidRow(n, to);
  cout << endl;
  pyramidHelper(n, to-1);
}

void pyramid(int n) {
  pyramidHelper(n, n);
}

// </pyramid>

int main() {
  int n = 5;
  pyramid(n);
}
