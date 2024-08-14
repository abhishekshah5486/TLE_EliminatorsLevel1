#include<iostream>
using namespace std;

void solveFibonacci(int N){
    long long int fb1 = 0;
    long long int fb2 = 1;

    if (N == 1) cout<<fb1<<endl;
    else if (N == 2) cout<<fb2<<endl;
    else{
        long long int fbN = 0;
        for (int j=0; j<(N-2); j++)
        {
            fbN = fb1 + fb2;
            fb1 = fb2;
            fb2 = fbN;
        }
        cout<<fbN<<endl;
    }
}
int main(){
    int N;
    cin >> N;

    solveFibonacci(N);
}