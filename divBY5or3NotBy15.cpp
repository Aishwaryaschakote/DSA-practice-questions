#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n:";
cin>>n;

if((n%5==0 || n%3==0) && n%15!=0){
    cout<<" yes your nbr is div by 5 or 3 but not divisible by 15";
}

}

