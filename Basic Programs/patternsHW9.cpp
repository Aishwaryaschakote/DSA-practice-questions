#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter n:";
    cin>>n;


for(int i=1; i<=n; i++){//rows
//    for(int j=n; j>=i; j--){//clms or
    for(int j=1; j<=n-i+1; j++){//clms

            cout<<char(j+64)<<" ";
}
cout<<endl;
}
}

//A B C D
//A B C
//A B
//A





