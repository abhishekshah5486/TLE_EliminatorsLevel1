#include<iostream>
using namespace std;

int main(){
    int A;
    char S;
    int B;

    cin>>A>>S>>B;
    if ( (A==B) && (S == '=')) cout<<"Right"<<endl;
    else if ( (A < B) && (S == '<')) cout<<"Right"<<endl;
    else if ( (A > B) && (S == '>')) cout<<"Right"<<endl;
    else cout<<"Wrong"<<endl;
}