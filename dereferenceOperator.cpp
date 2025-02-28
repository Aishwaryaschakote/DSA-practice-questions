//dereference operator is *ptr
#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* ptr= &a;

    cout<<a<<endl;
    *ptr = 20;
    cout<<a<<endl;

    }
