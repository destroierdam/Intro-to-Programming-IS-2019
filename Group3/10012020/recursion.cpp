#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n){
    if(n<0){
        return -1;
    }
    if(n==0){
        return 1;
    }
    return factorial(n-1) * n;
}

int fib(int x){
    if(x == 0) {
        return 0;
    }
    if(x == 1) {
        return 1;
    }
    return fib(x-1) + fib(x-2);
}

int fibTail(int n, int i, int first, int second) {
    if(i == n) {
        return first;
    }
    fibTail(n, i+1, second, first+second);
}
int counter(int x){
    if(x < 0) {
        return counter(-x);
    }
    if(x<=9){
        return 1;
    }
    return 1+ counter(x/10);
}
int countMatches(int x,int k){
    if(abs(x%10) == k && x!=0){
        return 1 + countMatches(x/10,k);
    }
    // #include <cmath>
    if(abs(x) <= 9 || x ==0){
       if(x ==k){
        return 1;

       }
       return 0;
    }
    return countMatches(x/10,k);
}

///[k,n]
/**
n
n n-1
n n-1 n-2
.
.
.
n n-1 ...      k
*/
void printHelper(int k, int n)
{
    if(k == n)
    {
        cout << n << endl;
    }
    else
    {
        printHelper(k + 1,n);
        /**
        for(int i = n; i >= k + 2; i--)
        {
            cout << i <<" ";
        }
        cout<<endl;
        */


        ///print logic
        for(int i = n; i >= k; i--)
        {
            cout << i <<" ";
        }
        cout<<endl;
    }
}

int comp(char a[], char b[] , int index)
{
    if(a[index] == b[index]){
        if(a[index] == '\0') {
            return 0;
        }
        return comp(a,b,++index);
    }
/*
    if(a[index] == '\0'){
        if(b[index] == '\0'){
            return 0;
        }
        return -1;
    }
    if(b[index] == '\0'){
        return 1;
    }
*/
    if(a[index] > b[index]){
        return 1;
    }
    if(a[index] < b[index]){
        return -1;
    }
}

void print(int n)
{
    printHelper(1,n);
}
bool isLower(char c){
    return (c>='a' && c<='z');
}
bool isUpper(char c){
    return (c>='A' && c<='Z');
}
void evaluateHelper(char *str, int digits, int smallCaps, int bigCaps){
    if(str[0]=='\0'){
        cout<<"Upper: "<<bigCaps<<endl;
        cout<<"Lower: "<<smallCaps<<endl;
        cout<<"Digits: "<<digits<<endl;
        return;
    }

    else if(isdigit(str[0])){
        evaluateHelper(str+1,digits+1,smallCaps,bigCaps);
    }
    else if(isLower(str[0])){
        evaluateHelper(str+1,digits,smallCaps+1,bigCaps);
    }
    else if(isUpper(str[0])){
       evaluateHelper(str+1,digits,smallCaps,bigCaps+1);
    }
    else{
         evaluateHelper(str+1,digits,smallCaps,bigCaps);
    }

}

void evaluate(char str[]) {
    evaluateHelper(str, 0, 0, 0);
}

int main(){
    char a[255];
    cin.getline(a,266);
    evaluate(a);

}
