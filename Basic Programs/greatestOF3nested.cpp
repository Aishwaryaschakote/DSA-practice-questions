#include<iostream>
using namespace std;
int main(){
    int a,b,c;
cout<<"Enter nbr1:";
cin>>a;
cout<<"Enter nbr2:";
cin>>b;
cout<<"Enter nbr3:";
cin>>c;
//if a>b and b>c then a>c-->a is the greatest
if(a>b){//b can never be the greatest
    if(a>c)
    cout<<a<<"is grater";
    else{//if  a>b and a!>c then c can be grater
        cout<<c<<"is grater";
    }
}
else{
    if(b>c){
    cout<<b<<"is grater";
}
    else{
    cout<<c<<"is grater";
    }
}
return 0;
}
