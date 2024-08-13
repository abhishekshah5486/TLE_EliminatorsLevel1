#include<iostream>
using namespace std;

int main(){
    int w;
    cin>>w;

    bool flag = false;
    for(int j=2; j<100; j=j+2){
        for(int k=2; k<100; k=k+2){
            if (k+j == w){
                cout<<"YES"<<endl;
                flag = true;
            }
            break;
        }
    }
    if (!flag) cout<<"NO"<<endl;
}