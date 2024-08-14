#include<iostream>
using namespace std;

int main(){
    int X;
    cin >> X;

    int cnt = 0;
    for (int j=2; j<X; j++){
        if (X % j == 0) cnt++;
    }
    if (cnt > 0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}