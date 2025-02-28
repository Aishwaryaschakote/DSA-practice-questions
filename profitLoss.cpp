
#include <iostream>
using namespace std;
int main() {
int cp;
int sp;
cout<<"enter cp";
cin>>cp;
cout<<"enter sp";
cin>>sp;
if(sp>cp){
    cout<<"profit"<<sp-cp;
}
else if(sp<cp){
    cout<<"loss"<<cp-sp;
}
else{
    cout<<"no profit no loss";
}
}
