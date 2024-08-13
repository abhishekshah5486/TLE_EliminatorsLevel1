#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    // n --> no of rows
    // m --> no of cols
    for(int j=1; j<=n; j++){
        if(j == 1 || j == n){
            for(int k=0; k<m; k++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        else{
            for(int k=0; k<m; k++){
                if(k == 0 || k == (m-1)) cout<<"*"<<" ";
                else cout<<" "<<" ";
            }
            cout<<endl;
        }
    }
}