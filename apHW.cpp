#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
//4 7 10 13 16 ....


//n will be the length of nbrs u want.
//ex: n=2 , 1 2
//n=3. 1 2 3

//METHOD 1
// for(int i=4; i<=3*n+1; i=i+3)
//    {
//        cout<<i<<" ";
//    }

//METHOD 2
//USING i ONLY FOR ITERATIONS AND USING ANOTHE VARIABLE FOR AP


int a=4;
for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";
        a=a+3;
    }
}
