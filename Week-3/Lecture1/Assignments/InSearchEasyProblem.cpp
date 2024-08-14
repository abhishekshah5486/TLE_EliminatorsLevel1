#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int responses[n];
    for (int j=0; j<n; j++)
    {
        cin>>responses[j];
    }
    bool flag = false;
    for (int j=0; j<n; j++){
        if (responses[j] == 1){
            flag = !flag;
            break;
        }
    }
    if (flag) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}