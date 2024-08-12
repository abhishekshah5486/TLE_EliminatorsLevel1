#include<iostream>
using namespace std;

int main() {
    int f = 5;
    cout<<(int)(f/2.0)<<endl;
    int c = 6;
    c++;
    cout<<c<<endl;
    
    // c++ post increment operator
    // First the value of c is consumed, then c is incremented
    // ++c pre increment operator
    // First c is incremented, then the value of c is consumed.
    // c-- post decrement operator
    // --c pre decrement operator
    int d = c--;
    cout<<c<<endl; // Expected output: 6 
    cout<<d<<endl; // Expected output: 7
    int num = -1;
    cout<<num++<<endl;
    cout<<num<<endl;

}

// Datatypes
// long int
// long long int
// int
// short int
// float 
// double
// long double
// bool
