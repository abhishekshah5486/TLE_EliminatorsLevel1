#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for (int j=1; j<=N; j++){
        for (int k=0; k<j; k++){
            cout<<"*";
        }
        for (int k=0; k<2*(N-j); k++){
            cout<<" ";
        }
        for (int k=0; k<j; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}