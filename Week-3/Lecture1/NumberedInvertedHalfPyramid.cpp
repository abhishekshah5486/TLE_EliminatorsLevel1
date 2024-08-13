#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int j=n-1; j>=0; j--){
        for(int k=1; k<=(j+1); k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}