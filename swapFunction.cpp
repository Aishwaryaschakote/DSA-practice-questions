#include<iostream>
using namespace std;

//int swap(int a, int b){
//int x=a;
//  a=b;//addresses of these variables will be diff^t than those a and b whic are used in the main function.
//  b=x;//cout<<&a<<endl; check these lines for confirmation. or chk the address.cpp code.
//}

int swap(int &a, int &b){//HERE USING &
int x=a;
  a=b;
  b=x;
}
int main(){
  int a=10;
  int b=20;
  cout<<"a is "<<a<<endl;
  cout<<"b is "<<b<<endl;
  swap(a,b);
  cout<<"after swap a is "<<a<<endl;
  cout<<"after swap b is "<<b<<endl;
}
//a is 10 OUTPUT WILL BE LIKE THIS, WHICH IS NOT SWAPPED.
//b is 20 IS CALLED AS "PASS BY VALUE."
//after swap a is 10
//after swap b is 20

//IT CAN BE SOLVED USING "CALL BY REFERENCE": WHICH USES *&* SYMBOL.

//last output isss:
//a is 10
//b is 20
//after swap a is 20
//after swap b is 10
