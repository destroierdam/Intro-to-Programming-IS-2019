#include <iostream>
#include <cstring> // cin, cout for char[]
using std::cin;
using std::cout;
using std::endl;

void printASCIITable() {
  for(unsigned char c = 0; ; c++) {
    cout << "Character #" << (int)c << ": \"" << c << "\"" << endl;
    if(c == 255) {
      break;
    }
  }
}

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

void strcpy(char destination[], char source[]) {
  int sourceLength = strlen(source);

  for(int i = 0; i < sourceLength; i++) {
    destination[i] = source[i];
  }

  destination[sourceLength] = '\0';
}


void strcat(char destination[], char source[]) {
  int destinationLength = strlen(destination);

  // Copy the source to the end of the destination
  strcpy(destination + destinationLength, source);
}

int main() {
  char str1[] = "ASD";
  char str2[] = "HJK";

  strcat(str1, str2);

  cout << str1 << endl;
}
