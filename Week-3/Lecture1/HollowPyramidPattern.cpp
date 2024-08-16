#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for (int j=0; j<N; j++){
        for (int k=0; k<(N-j); k++){
            cout<<"*";
        }
        for (int k=0; k<2*j; k++){
            cout<<" ";
        }
        for (int k=0; k<(N-j); k++){
            cout<<"*";
        }
        cout<<endl;
    }
}