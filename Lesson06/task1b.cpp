#include<iostream>
using namespace std;
/*
Да се напише програма, която по въведено 4-цифрено естествено число проверява дали първата му цифра е нечетна и е най-голямата сред всички цифри.
*/
int main()
{
    // Да си направим една променлива за числото и четири променливи за четирите цифри
    int n, digit1, digit2, digit3, digit4;
    
    cin>>n;
    
    digit1 = n / 1000;
    digit2 = n / 100 % 10;
    digit3 = n / 10 % 10;
    digit4 = n % 10;
    
    if(digit1 % 2 == 1 && digit1 > digit2  && digit1 > digit3 && digit1 > digit4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
	return 0;
}
