#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;

int strlen(char str[]) {
  int length = 0;
  for(int i = 0; ; i++) {
    if(str[i] != '\0') {
      length++;
    } else {
      break;
    }
  }

  return length;
}

int strcmp(char lhs[], char rhs[]) {
  int lhsLength = strlen(lhs);
  int rhsLength = strlen(rhs);

  for(int i = 0; i < lhsLength && i < rhsLength; i++) {
    // if(lhs[i] < rhs[i]) {
    //   return -1;
    // } else if(lhs[i] > rhs[i]) {
    //   return 1;
    // }

    if(lhs[i] != rhs[i]) {
      return lhs[i] - rhs[i];
    }
  }

  // if(lhsLength < rhsLength) {
  //   return -1;
  // } else {
  //   return 1;
  // }

  return lhsLength - rhsLength;
}

void strcat(char dest[], char source[]) {
  int destLength = strlen(dest);
  int sourceLength = strlen(source);

  for(int i = 0; i < sourceLength; i++) {
    dest[i + destLength] = source[i];
  }
}

int main() {
  char str1[128] = "ASD";
  char str2[128] = "ASDD";
  strcat(str1, str2);
  cout << str1 << endl;
}
