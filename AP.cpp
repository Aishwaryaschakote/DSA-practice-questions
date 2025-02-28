#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
//1 3 5 7 9 ..


//n will be the length of nbrs u want.
//ex: n=2 , 1 2
//n=3. 1 2 3


//    for(int i=1; i<=2*n-1; i=i+2)
//    {
//        cout<<" HI JIII"<<endl;// it will print n times given string.
//    }


 for(int i=1; i<=2*n-1; i=i+2)
    {
        cout<<i<<" ";
    }
}

