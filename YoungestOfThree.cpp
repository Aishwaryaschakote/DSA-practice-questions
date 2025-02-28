
#include<iostream>
using namespace std;
int main()
{
    int age1,age2,age3;
    cout<<"enter age of Ram : ";
    cin>>age1;
    cout<<"enter age of Shyaam : ";
    cin>>age2;
    cout<<"enter age of Ajay : ";
    cin>>age3;

    if(age1<age2){
        if(age2<=age3){
            cout<<"Ram is youngest one";
        }
        else{
            cout<<" Ajay is youngest one1";
        }
    }
    else{
        if(age2<age3){
             cout<<"shyaam is youngest one";
        }
        else{
            cout<<" Ajay is youngest one2";
        }
    }
}
