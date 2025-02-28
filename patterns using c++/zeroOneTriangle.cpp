#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter n:";
    cin>>n;


for(int i=1; i<=n; i++){//rows
   for(int j=1; j<=i; j++){//clms
            if((i+j)%2==0)cout<<"1"<<" ";
            else{
                cout<<"0"<<" ";
            }
}
cout<<endl;
}
}



//1
//0 1
//1 0 1
//0 1 0 1  if i+j is even then print 1 else print 0.


