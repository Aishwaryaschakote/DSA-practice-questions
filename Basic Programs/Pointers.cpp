#include<iostream>
using namespace std;
int main(){
    int a=3;
//    int* p;
//    p= &a;
// instead of these 2lines we can write it in 1line:
        int* p=&a;

    cout<<&a<<endl;
    cout<<p<<endl;
        cout<<*p<<endl;// 0x61fe14
                       //0x61fe14
                       // 3


}
//0x61fe14
//0x61fe14 BOTH ARE THE SAME ADDRESSES

// // TO ACCESS THE VARIABLE VALUE WHICH IS STORED AT THE
// // PERTICULAR ADDRESS USE ""*"" symbol.
