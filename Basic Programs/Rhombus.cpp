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
    for(int j=1; j<=n; j++){//stars
             cout<<"*"<<" ";
     }
cout<<endl;
}


cout<<endl;

for(int i=1; i<=n; i++){//rows

    for(int j=1; j<=n-i; j++){//spaces
             cout<<" "<<" ";
     }
    for(int j=1; j<=n; j++){//stars
             cout<<j<<" ";
     }
cout<<endl;
}



cout<<endl;

for(int i=1; i<=n; i++){//rows

    for(int j=1; j<=n-i; j++){//spaces
             cout<<" "<<" ";
     }
    for(int j=1; j<=n; j++){//stars
             cout<<char(j+64)<<" ";
     }
cout<<endl;
}
}
//      * * * *
//    * * * *
//  * * * *
//* * * *
//
//      1 2 3 4
//    1 2 3 4
//  1 2 3 4
//1 2 3 4
//
//      A B C D
//    A B C D
//  A B C D
//A B C D
