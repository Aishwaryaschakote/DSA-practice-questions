#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter n:";
    cin>>n;


for(int i=1; i<=n; i++){//rows
//    for(int j=n; j>=i; j--){//clms or
    for(int j=1; j<=n-i+1; j++){//clms

            cout<<i<<" ";
}
cout<<endl;
}
}

//1 1 1 1 1
//2 2 2 2
//3 3 3
//4 4
//5






