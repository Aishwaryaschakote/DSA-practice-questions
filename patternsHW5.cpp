#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter n:";
    cin>>n;


for(int i=1; i<=n; i++){//rows
    for(int j=1; j<=i; j++){//clms
            if(i%2!=0){
            cout<<j<<" ";
            }
            else{
                cout<<char(j+64)<<" ";
            }
}
cout<<endl;
}
}

//1
//A B
//1 2 3
//A B C D
//1 2 3 4 5




