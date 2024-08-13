#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int j=0; j<n; j++){
        if (j == 0){
            for (int k=0; k<(n-j); k++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        else{
            for(int k=0; k<(n-j); k++){
                if (k == 0 || k == (n-j-1)){
                    cout<<"*"<<" ";
                }else cout<<" "<<" ";
            }
            cout<<endl;
        }   
    }
}