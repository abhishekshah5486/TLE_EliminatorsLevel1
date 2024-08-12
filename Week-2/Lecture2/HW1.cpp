#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;

    // if age 0-17 Child
    // if age 18-64 Adult
    // if age 65+ Senior Citizen

    if (age >=0 && age <= 17) cout<<"Child"<<endl;
    else if (age>=18 && age<=64) cout<<"Adult"<<'\n';
    else cout<<"Senior Citizen"<<endl;
}