#include<iostream>
using namespace std;
int main(){
    int n,m;

    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter m:";
    cin>>m;


for(int i=1; i<=n; i++){//rows
    for(int j=1; j<=m; j++){//clms
            if(i==1||j==1||i==n||j==m) cout<<"*"<<" ";
            else cout<<" "<<" ";
}
cout<<endl;
}
}


