#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for (int j=1; j<=N; j++){
        if (N % j == 0) cout << j << endl;
    }

    return 0;
}