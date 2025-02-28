#include<iostream>
using namespace std;
int main()
{
int n;

cout<<"enter a nbr:";
cin>>n;
int product=1;
while(n!=0){
   int last_digit=n%10;
   product = product*last_digit;
    n=n/10;
}
cout<<product;
}

