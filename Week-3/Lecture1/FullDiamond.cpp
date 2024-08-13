#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int j=1; j<=n; j++){
        for(int k=0; k<(n-j); k++){
            cout<<" ";
        }
        for(int k=0; k<j; k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int j=n; j>0; j--){
        for(int k=0; k<(n-j); k++){
            cout<<" ";
        }
        for(int k=0; k<j; k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
