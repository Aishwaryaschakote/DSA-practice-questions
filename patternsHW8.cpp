#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter n:";
    cin>>n;


for(int i=1; i<=n; i++){//rows
 //     for(int j=n; j>=i; j--){//clms or
  for(int j=n; j>=n-i+1; j--){//clms  >only change i didn't observed.!!!!!!

            cout<<j<<" ";
}
cout<<endl;
}
}


//4
//4 3
//4 3 2
//4 3 2 1





