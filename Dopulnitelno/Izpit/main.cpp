#include <iostream>
using namespace std;


bool Traycho(){
    int chicken, carrots, onion, pasta, potatoes;
    bool salt, pepper, FR;
    
    cin>>chicken>>carrots>>onion>>pasta>>potatoes;
    cin>>salt>>pepper>>FR;
    
    bool Qhniq = (salt && pepper && chicken>=300 && onion>=1 && pasta>=50 && carrots>=1 && potatoes>=2 && FR==1);
    
    bool KartofenaQhniq = true; //  = ....;
    
    bool KartofiNaFurna = false; // = ....;
    
    return Qhniq || KartofenaQhniq || KartofiNaFurna;
}

void draw(){
    int n;
    cin>>n;
    
    int lineSize = 4*n - 3;
    
    //draw first line
    //draw spaces
    for(int i=0;i<n-1;i++){
        cout<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<"* ";
    }
    //new line
    cout<<endl;
    int firstStar = n-2;
    int secondStar = n;
    int thirdStar = lineSize - (n+1);
    int fourthStar = lineSize - (n-1);
    
    for(int j =0 ; j<n-2;j++){
        for(int i=0;i<lineSize;i++){
            if(i == firstStar || i == secondStar || i == thirdStar || i== fourthStar){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        firstStar--;
        secondStar++;
        thirdStar--;
        fourthStar++;
        cout<<endl;
    }
    //draw last line
    for(int i=0;i<2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;
    
}

int chess(int arr[][50], int rows, int colms)
{
    
    
    int maxsum = 0;
    for(int i = 2; i < rows + 2; i++)
    {
        for(int j = 2; j < colms + 2; j++)
        {
            int sum = arr[i][j] + arr[i + 1][j + 2] + arr[i -2][j + 1] + arr[i -2][j - 1] + arr[i - 1][j - 2] + arr[i + 2][j - 1] + arr[i + 2][j + 1] + arr[i + 1][j -2] + arr[i - 1][j + 2];
            if(sum > maxsum)
            {
                maxsum = sum;
            }
            
        }
    }
    return maxsum;
}

int[] func()
{
    int a[5];
    
    return a;
}

int main() {
    
    int matrix[50][50] = {{0}};
    int rows, colms;
    cin >> rows;
    cin >> colms;
    for(int i = 2; i < rows + 2; i++)
    {
        for(int j = 2; j < colms + 2; j++)
            cin >> matrix[i][j];
    }
    cout << chess(matrix, rows, colms);
    return 0;
}
