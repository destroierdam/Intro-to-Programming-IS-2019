#include <iostream>
#include <cstring> // cin, cout for char[]
#include <string> //
#include <exception> 
#include <stdexcept> 
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
    if('\0' != str[i]) {
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

/// Returns pointern to the beginning of the substring
char* strstr(char str[], char substring[]) {
  int strLength = strlen(str);
  int substringLength = strlen(substring);

  // if the length of the remaining str is less than the length of the substring, we will not find it, we do not need to check further
  for(int i = 0; i <= strLength - substringLength; i++) {
    if(strcmp(&str[i], substring) == 0) {
      return &str[i];
    }
  }

  return nullptr;
}

class invalid_brackets_string: public std::exception {
	std::string message;
public:
	invalid_brackets_string(const char * _message, char invalidChar):message(_message) {
		message += invalidChar;
	}
	
	const char* what() const noexcept override {
		return this->message.c_str();
	}
};

bool brackets(char str[]) {
  int strLength = strlen(str);
  int counter = 0;

  for(int i = 0; i < strLength; i++) {
    if('(' == str[i]) {
      counter++;
    } else if (')' == str[i]) {
      counter--;
    } else {
		throw invalid_brackets_string("Character not a bracket", str[i]);
	}

    if(counter < 0) {
      return false;
    }
  }

  // if(0 == counter) {
  //   return true;
  // } else {
  //   return false;
  // }

  return 0 == counter;
}
int main() {
  char str1[] = "ASDFGHJK";
  char str2[] = "HJK";
  char bracketsString[] = "((fsdfdsfsd))()"; // (() 

  try {
	cout << brackets(bracketsString) << endl;
  } catch (invalid_brackets_string & ex) {
	  std::cout << ex.what() << std::endl;
  }
		
}
