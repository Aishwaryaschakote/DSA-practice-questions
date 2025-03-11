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
    for(int j=1; j<=i; j++){//stars
             cout<<"*"<<" ";
     }
    for(int j=1; j<=i-1; j++){//stars
             cout<<"*"<<" ";
     }
cout<<endl;
}
cout<<endl;

for(int i=1; i<=n; i++){//rows

    for(int j=1; j<=n-i; j++){//spaces
             cout<<" "<<" ";
     }
    for(int j=1; j<=2*i-1; j++){//stars
             cout<<j<<" ";
     }
cout<<endl;
}

cout<<endl;
for(int i=1; i<=n; i++){//rows

    for(int j=1; j<=n-i; j++){//spaces
             cout<<" "<<" ";
     }
    for(int j=1; j<=2*i-1; j++){//stars
             cout<<char(j+64)<<" ";
     }
   cout<<endl;
}

}

//        *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *
//
//        1
//      1 2 3
//    1 2 3 4 5
//  1 2 3 4 5 6 7
//1 2 3 4 5 6 7 8 9
//
//        A
//      A B C
//    A B C D E
//  A B C D E F G
//A B C D E F G H I

