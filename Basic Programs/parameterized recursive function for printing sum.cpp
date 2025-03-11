#include<iostream>
using namespace std;

void sumpara(int n, int sum){
if(n==0){
   cout<<"sum is:"<<sum<<endl;
   return;
}
sumpara(n-1, sum+n);
}

int main(){
int n;
cout<<"Enter n:";
cin>>n;
sumpara(n,0);
return 0;
}
