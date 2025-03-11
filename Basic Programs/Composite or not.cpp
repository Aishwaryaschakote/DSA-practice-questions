#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

bool flag=true;//for prime
for(int i=2; i<=n/2; i++)
    {
       if(n%i==0) {
        flag=false;//means composite
         break;
       }

    }
if(n==1)cout<<"neither prime nor composite!";
if(flag==true)cout<<"prime";
else {
    cout<<"composite";
}
}


