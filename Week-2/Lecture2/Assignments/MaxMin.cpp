#include<iostream>
using namespace std;

int main(){
    int A, B, C;
    cin>>A>>B>>C;
    
    if( A<=B && A<=C ){
        cout<<A<<" ";
        if (  B>=A && B>=C ) cout<<B<<endl;
        else cout<<C<<endl;
    }
    else if ( B<=C && B<=A ){
        cout<<B<<" ";
        if ( C>=A && C>=B ) cout<<C<<endl;
        else cout<<A<<endl;
    }
    else{
        cout<<C<<" ";
        if (A>=B && A>=C) cout<<A<<endl;
        else cout<<B<<endl;
    }
}