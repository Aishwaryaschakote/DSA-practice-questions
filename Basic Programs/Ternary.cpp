#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    //(condition) ? if true : if false
    (n%2==0)? cout<<n<<" is even Nbr" : cout<<n<<" is odd Nbr";
}
