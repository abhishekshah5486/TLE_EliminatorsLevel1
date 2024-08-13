#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    // n --> no of rows
    // m --> no of cols
    for (int j=0; j<n; j++){
        for(int k=0; k<m; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}