#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int j=0; j<n; j++){
        for(int k=1; k<=(j+1); k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}