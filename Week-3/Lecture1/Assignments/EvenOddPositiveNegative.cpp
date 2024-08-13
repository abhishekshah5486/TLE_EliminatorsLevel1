#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int arr[N];
    for(int j=0; j<N; j++){
        cin>>arr[j];
    }

    int even = 0, odd = 0, positive = 0, negative = 0;
    for(int j=0; j<N; j++){
        if(arr[j] % 2 == 1){
            odd++;
        }else even++;
        if (arr[j] > 0) positive++;
        else negative++;
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;
}