#include<iostream>
using namespace std;
int main(){
    int n,m;

    cout<<"Enter n:";
    cin>>n;

for(int i=1; i<=n; i++){//rows

    for(int j=1; j<=n-i; j++){//spaces
             cout<<" "<<" ";
     }
    for(int j=1; j<=2*i-1; j++){//stars
             cout<<"*"<<" ";
     }
cout<<endl;
}

for(int i=n-1; i>=1; i--){//rows

    for(int j=1; j<=n-i; j++){//spaces
             cout<<" "<<" ";
     }
    for(int j=1; j<=2*i-1; j++){//stars
             cout<<"*"<<" ";
     }
cout<<endl;
}
}
//
//      *
//    * * *
//  * * * * *
//* * * * * * *
//  * * * * *
//    * * *
//      *
