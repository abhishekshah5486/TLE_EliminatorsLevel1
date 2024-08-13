#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    // If the sum is lesser than six, cout<<"I got a value"
    // If the sum is 
    for(int i=0; i<10; i++){
        sum += i;
        if (sum < 6){
            cout<<"I got a value"<<endl;
            continue;
        }
        if (sum < 8){
            cout<<"Hello"<<endl;
        } else cout<<"Bye"<<endl;
    }
}