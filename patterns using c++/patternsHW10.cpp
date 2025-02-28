#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter n:";
    cin>>n;

//METHOD 1
for(int i=1; i<=n; i++){//rows
    for(int j=1; j<=2*i-1; j+=2){//clms
                 cout<<j<<" ";
}
cout<<endl;
}
cout<<endl;

//1      odd                   2     even (2j)
//1 3    2j-1       OR         2 4
//1 3 5                        2 4 6
//1 3 5 7                      2 4 6 8


//METHOD 2
for(int i=1; i<=n; i++){//rows
  for(int j=1; j<=i; j++){//clms
        cout<<2*j-1<<" ";

}
cout<<endl;
}
cout<<endl;

//METHOD 3

for(int i=1; i<=n; i++){//rows
  int a=1;
  for(int j=1; j<=i; j++){//clms
        cout<<a<<" ";
        a+=2;
}
cout<<endl;
}
}
