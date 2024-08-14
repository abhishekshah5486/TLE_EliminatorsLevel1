#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int j=n-1; j>=0; j--){
        if (j == (n-1)){
            for(int k=1; k<=(j+1); k++){
                cout<<k<<" ";
            }
            cout<<endl;
        }
        else{
            for(int k=1; k<=(j+1); k++){
                if (k == 1 || k == (j+1)) cout<<k<<" ";
                else cout<<" "<<" ";
            }
            cout<<endl;
        }
    }
}