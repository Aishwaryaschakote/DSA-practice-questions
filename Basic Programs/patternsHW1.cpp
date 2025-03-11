#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter n:";
    cin>>n;


for(int i=1; i<=n; i++){//rows
    for(int j=1; j<=n; j++){//clms
            cout<<char(i+64)<<" ";
}
cout<<endl;
}
}
//A A A A
//B B B B
//C C C C
//D D D D
