#include<iostream>
using namespace std;
int main(){

//simple method 1:
//cout<<"****"<<endl;
//cout<<"****"<<endl;
//cout<<"****"<<endl;

//simple method 2:
//int n;
//
//cout<<"enter value: ";
//cin>>n;
//
//for(int i=1; i<=n; i++){
//    cout<<"****"<<endl;
//}

//improved method 3:
int n,m;

cout<<"enter numbr of rows: ";
cin>>n;
cout<<"enter numbr of clms: ";
cin>>m;

for(int i=1; i<=n; i++){//rows
    for(int i=1; i<=m; i++){//clms
            cout<<" * ";
}
cout<<endl;
}
}
