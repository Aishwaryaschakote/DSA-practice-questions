#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter n:";
    cin>>n;


for(int i=1; i<=n; i++){//rows
    for(int j=1; j<=n; j++){//clms
            cout<<char(j+96)<<" ";
}
cout<<endl;
}
}

//a b c
//a b c
//a b c
