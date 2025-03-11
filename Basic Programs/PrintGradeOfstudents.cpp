
#include<iostream>
using namespace std;
int main()
{
    int p;

    cout<<"Enter your %: ";
    cin>>p;

    if(p>=81 && p<=100){
        cout<<"very good";
    }
    else if(p>=61 && p<=80){
        cout<<" good";
    }
    else if(p>=41 && p<=60){
        cout<<"Avg";
    }
    else if(p<=40 && p>0){
        cout<<"FAIL";
    }
    else{
        cout<<"enter valid %";
    }
}
