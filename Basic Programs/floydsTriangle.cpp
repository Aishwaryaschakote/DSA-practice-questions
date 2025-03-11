#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter n:";
    cin>>n;

int a=1;
for(int i=1; i<=n; i++){//rows

    for(int j=1; j<=i; j++){//clms
       //     cout<<a<<" ";
       //     a++;
              cout<<a++<<" ";
}
cout<<endl;
}
}

//1
//2 3
//4 5 6
//7 8 9 10 FLOYD'S trinagle


