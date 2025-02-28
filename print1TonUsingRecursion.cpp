//FUNCTION CALLING ITSELF.
#include<iostream>
using namespace std;

void print(int x, int n ){
    if(x>n) return;
cout<<x<<endl;
print(x+1,n);
}

int main(){
int n;
cout<<"Enter n: ";
cin>>n;
print(1,n);
}
//printing 1 To N with extra parameter x.
