#include<iostream>
using namespace std;
int main()
{
int n;

cout<<"enter a nbr:";
cin>>n;

while(n!=0){
   int last_digit=n%10;
    cout<<last_digit;
    n=n/10;
}

}

