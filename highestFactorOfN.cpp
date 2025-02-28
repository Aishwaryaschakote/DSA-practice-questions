#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
////method one
//int f=1;
//for(int i=1; i<n/2; i++)//we will get our all factors upto half of the nbrs so n/2.
//    {
//       if(n%i==0) f=i;
//
//    }
//    cout<<f<<" ";
//}

//WHICH ONE WILL BE THE LAST ONE THAT WILL BE STORED IN f.

//method two
for(int i=n/2; i>=1; i--)
    {
       if(n%i==0) {
            cout<<i<<" ";
            break;//it will print only 1st factor of n
       }
    }

}
