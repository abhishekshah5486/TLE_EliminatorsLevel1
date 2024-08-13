#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int j=1; j<=n; j++){
        if (j == n){
            for (int k=0; k<(n-j); k++){
                cout<<" ";
            }
            for(int k=0; k<j; k++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }else{
            for (int k=0; k<(n-j); k++){
                cout<<" ";
            }
            for(int k=0; k<j; k++){
                if (k == 0 || k == (j-1)){
                    cout<<"*"<<" ";
                }
                else cout<<" "<<" ";
            }
            cout<<endl;
        }
    }
}