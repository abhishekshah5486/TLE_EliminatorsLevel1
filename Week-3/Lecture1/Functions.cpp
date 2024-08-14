#include<iostream>
using namespace std;

int squareHelper(int x)
{
    int sq = x * x;
    return sq;
}

int main(){
    cout<<squareHelper(5)<<endl;
    return 0;
}