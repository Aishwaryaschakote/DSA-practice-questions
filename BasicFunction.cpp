#include<iostream>
using namespace std;

void jag(){
cout<<"hello how are you?"<<endl;
 }

void vij(){
cout<<"hope you are doing good!"<<endl;
jag();
}
int main(){
    cout<<"Let's meet on this saturday.."<<endl;
    jag();
    vij();
    return 0;
}
