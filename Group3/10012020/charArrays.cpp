#include <iostream>
using namespace std;

bool isPalindrom(char niz[]);
int len(char niz[]);
void reverseStr(char* str);
bool isAllAlpha(char niz[]);
bool isAlpha(char c);
int ToNumber(char* niz);
bool IsNumber(char* niz);
int main()
{
   char niz[256];
   cin>>niz;

   //reverseStr(niz);
   //cout<<niz<<endl;

   //cout<<isAllAlpha(niz)<<endl;
   cout << ToNumber(niz);
}

int len(char niz[])
{
    int counter=0;
    for(int i=0;niz[i]!='\0';i++)
    {
       counter++;
    }
    return counter;
}

bool isPalindrom(char niz[])
{
    int size=len(niz);
    for(int i=0, j=size-1; i<j; i++,j--)
    {
        if(niz[i]!=niz[j])
        {
            return false;
        }
    }
    return true;

}

void reverseStr(char* str)
{
    int size = len(str);
    for (int i = 0; i < size / 2; i++)
    {
        int temp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = temp;
    }
}
bool isAllAlpha(char arr[]){
    int size = len(arr);
    for(int i = 0 ; i< size;i++){
        if(!isAlpha(arr[i])){
            return false;
        }
    }
}
bool isNumber(char* niz)
{
    for(int i = 0;i < len(niz);i++)
    {
        if('0' > niz[i] || niz[i] > '9')
        {
            return false;
        }
    }
    return true;
}

int ToNumber(char* niz)
{
    if(isNumber(niz))
    {
        int number = 0;
        for(int i = 0;i < len(niz);i++)
        {
          number *= 10;
          number += (int)niz[i] - '0';
        }
        return number;
    }
    return -1;
}

bool isAlpha(char c){
    return (c>='A' && c<='Z') || (c>='a' && c<='z');
    /* Analogichno na
    if((c>='A' && c<='Z') || (c>='a' && c<='z')){
        return true;
    }
    return false;
    */

}
