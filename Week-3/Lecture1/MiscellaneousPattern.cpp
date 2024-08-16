#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int j=1; j<=n; j++){
        int num = (j*j - j + 2)/2;
        if (j % 2 == 0){
            for (int k=0; k<j; k++){
                cout<<num++<<" ";
            }
            cout<<endl;
        }
        else{
            for (int k=j; k>0; k--){
                cout<<num+(k-1)<<" ";
            }
            cout<<endl;
        }
    }
}


// Given an integer n(1<=n<=10), print n rows of the given pattern in minimum length.

// 1

// 2 3

// 6 5 4

// 7 8 9 10

// Smallest element in the nth level is given by (n^2 - n + 2)/2;
// j is the level of the pattern