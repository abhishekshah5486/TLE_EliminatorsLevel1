#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for (int j=1; j<=N; j++){
        for (int k=1; k<=j; k++){
            if (k % 2 == 1) cout<<k;
            else cout<<" ";
        }
        cout<<endl;
    }
}