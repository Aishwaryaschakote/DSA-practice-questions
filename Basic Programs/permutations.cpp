#include<iostream>
using namespace std;

int fact(int x){
int f=1;

for(int i=1; i<=x; i++)
  f =f*i;

return f;
}

int main()
{
int n,r;

cout<<"enter n:";
cin>>n;
cout<<"enter r:";
cin>>r;

int a=fact(n);
int c=fact(n-r);
cout<<a/c;
}

