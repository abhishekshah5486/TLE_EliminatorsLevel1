#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int j=1; j<=n; j++){
        for (int k=1; k<=j; k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}