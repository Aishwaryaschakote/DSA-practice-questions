#include<iostream>
using namespace std;
int main()
{
int n;

cout<<"enter a nbr:";
cin>>n;

int i=1;
int factorial=1;

for(i=1; i<=n; i++){
  factorial =factorial*i;
  cout<<i<<"! = "<<factorial<<endl;

}

}

