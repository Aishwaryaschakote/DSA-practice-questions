#include<iostream>
using namespace std;
int main(){
    int n,m;

    cout<<"Enter n:";
    cin>>n;

for(int i=1; i<=n; i++){//rows
    for(int j=1; j<=n; j++){//clms
            if (i == j || i + j == n + 1) cout<<"*"<<" ";
            else cout<<" "<<" ";
}
cout<<endl;
}
}
//
//*       *
//  *   *
//    *
//  *   *
//*       *
//
