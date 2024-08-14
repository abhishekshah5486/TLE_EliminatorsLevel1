#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int arr[N];
    for (int j=0; j<N; j++)
    {
        cin>>arr[j];
    }

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    for (int j=0; j<N; j++)
    {
        if (arr[j] % 2 == 0) even++;
        else odd++;
        if (arr[j] > 0) positive++;
        else if (arr[j] < 0) negative++;
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;
}