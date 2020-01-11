#include <iostream>
using namespace std;

// <Zadacha 1>
const int maxCols = 100;
int mainDiagonal(int matrix[][maxCols], int size)
{
  int sum = 0;
  for (int i = 0; i<size ; i++)
  {
    sum+=matrix[i][i];
  }
  return sum;
}

int secondDiagonal(int matrix[][maxCols], int size)
{
  int sum = 0;
  for(int i = 0; i < size; i++)
  {
    sum+=matrix[i][size-i-1];
  }
  return sum;
}

bool isPowerOfTwo(int number)
{
  while(number != 1)
  {
    if(number % 2 != 0)
    {
      return false;
    }
    number/=2;
  }
  return true;
}

void firstTask() {
  int matrix[100][100];
  int n;
  cin>>n;
  for(int row = 0; row < n; row++)
  {
    for(int col = 0; col < n; col++)
    {
      cin>>matrix[row][col];
    }
  }

  int sumDiagonals = mainDiagonal(matrix, n) + secondDiagonal(matrix, n);
  if(n%2 == 1)
  {
    sumDiagonals -= matrix[n/2][n/2];
  }
  cout<<sumDiagonals<<endl;
  cout<<isPowerOfTwo(sumDiagonals)<<endl;
}
// </Zadacha 1>
// ------------------------------------------------

int strLen(char str[]){
  int len = 0;
  for(int i = 0; str[i] != '\0'; i++){
    len++;
  }

  return len;
}

void countSym(char str[], int wordCount[]){

  for(int i = 0; str[i] != '\0'; i++){
      if(str[i] >= 'a' && str[i] <= 'z'){
          wordCount[str[i] - 'a']++;
      }
      if(str[i] >= 'A' && str[i] <= 'Z'){
        wordCount[str[i] - 'A']++;
      }
  }

}







int main() {
  int wordCountStr1[26] = {0}, wordCountStr2[26] = {0};
  char str1[128], str2[128];

  cin.getline(str1,128);
  cin.getline(str2,128);

  countSym(str1,wordCountStr1);

  for(int i = 0; i < 26; i++){
    cout<<wordCountStr1[i]<<" ";
  }
  cout<<endl;

  return 0;
}
