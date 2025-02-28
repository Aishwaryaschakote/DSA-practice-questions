#include<iostream>
using namespace std;

void sum(int a, int b){//FORMAL PARAMETERS
cout<<a+b<<endl;
}

void sum1(int a, int b){
cout<<a+b<<endl;
}
int main(){
int a,b;

cout<<"enter 1st nbr: ";
cin>>a;
cout<<"enter 2nd nbr: ";
cin>>b;

sum(a,b);//ACTUAL PARAMETERS
sum1(13,2);

}
