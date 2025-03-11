#include<iostream>
using namespace std;
int main()
{
int n;

cout<<"enter a nbr:";
cin>>n;
int sum=0;
while(n!=0){

   int last_digit=n%10;

    if(last_digit%2==0){
    sum = sum+last_digit;
    }
    n=n/10;
}
cout<<sum;
}
