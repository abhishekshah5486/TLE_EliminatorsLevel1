#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int j=1; j<=n; j++)
    {
        if (j == 1 || j == n){
            for (int k=0; k<n; k++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for (int k=0; k<(n-j); k++){
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
    }

    return 0;
}