#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter n:";
    cin>>n;


for(int i=1; i<=n; i++){//rows
    for(int j=1; j<=i; j++){//clms
            cout<<char(j+64)<<" ";
}
cout<<endl;
}
}

//A
//A B
//A B C
//A B C D



