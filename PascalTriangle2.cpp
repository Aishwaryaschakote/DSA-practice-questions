#include<iostream>
using namespace std;

int fact(int x){
int f=1;
for(int i=1; i<=x; i++){
  f =f*i;
}
return f;
}

int ncr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}


int main(){
int n;
cout<<"Enter n: ";
cin>>n;
for(int i=0; i<=n; i++){
    for(int j=0; j<=n-i-1; j++){
        cout<<" ";
    }

    for(int j=0; j<=i; j++){
        cout<<ncr(i,j)<<" ";
    }
    cout<<endl;

}
}
//Enter n: 4
//    1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1
