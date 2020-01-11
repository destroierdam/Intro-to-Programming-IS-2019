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

bool areEqual(int wordCount1[], int wordCount2[]){
    for(int i = 0; i < 26; i++){
      if(wordCount1[i] != wordCount2[i]){
          return false;
      }
    }

    return true;
}

void secondTask(){
  int wordCountStr1[26] = {0}, wordCountStr2[26] = {0};
  char str1[128], str2[128];

  cin.getline(str1,128);
  cin.getline(str2,128);

  countSym(str1,wordCountStr1);
  countSym(str2,wordCountStr2);

  cout<<endl;

  cout<<areEqual(wordCountStr1, wordCountStr2)<<endl;
}

// ---------------------------------------------------------------


double getMult(double arr[],int size) {
  if(size == 1) {
    return 1;
  }
  if(size == 2) {
    if(arr[0]>arr[1] && arr[1] > 0) {
        return arr[1];
    }
    return 1;
  }


  if(arr[0]> arr[1] && arr[1] > 0){
    return arr[1] * getMult(arr+1,size-1);
  }
  return getMult(arr+1,size-1);
}


void testGetMult() {
  double arr[100];
  int n;
  cin>>n;
  for(int i = 0;i<n;i++ ){
    cin>> arr[i];
  }
  cout<<getMult(arr,n)<<endl;
}
// ------------------------------------------------------------

int longestColIndex(int matrix[][5],int m,int arr[], int n){
  int biggestIndex = 0;
  int biggestMatchingElements =0;
  for(int i=0;i<5 ;i++)
  {
      int matchingElements =0;
      for(int j=0;j<m && j<n ;j++)
      {
        if(matrix[j][i] == arr[j])
        {
          matchingElements++;
        }
      }
      if(matchingElements>biggestMatchingElements)
      {
        biggestIndex = i;
        biggestMatchingElements = matchingElements;

      }
  }

  return biggestIndex;
}

void testLongestColIndex() {}

int main() {

  return 0;
}
