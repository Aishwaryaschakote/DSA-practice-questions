#include<iostream>
using namespace std;

int sump(int n){
    if(n==1) return 1;
    return n + sump(n-1);
}

int main(){
int n;
cout<<"Enter n:";
cin>>n;
cout<<sump(n);
return 0;
}

