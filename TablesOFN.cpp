#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
//loop runs 10 times
    for(int i=n; i<=n*10; i=i+n)
    {
        cout<<i<<" ";
    }
}

