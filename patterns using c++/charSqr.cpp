#include<iostream>
using namespace std;
int main(){

int n;

cout<<"enter numbr of rows: ";
cin>>n;

//  method 1:


//
//for(char ch='A'; ch<='D'; ch++){//rows
//    for(char ch='A'; ch<='D'; ch++){//clms
//            cout<<ch<<" ";
//}
//cout<<endl;
//}
//}

// method 2:

for(int i=1; i<=n; i++){//rows
    for(int j=1; j<=n; j++){//clms
            cout<<char(j+64)<<" ";
}
cout<<endl;
}
}
