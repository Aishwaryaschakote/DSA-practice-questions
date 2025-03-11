#include<iostream>
using namespace std;

//METHOD 1:
//int main(){
//  int a=10;
//  int b=20;
//  cout<<"a is "<<a<<endl;
//  cout<<"b is "<<b<<endl;
//  int x=a;
//  a=b;
//  b=x;
//  cout<<"after swap a is "<<a<<endl;
//  cout<<"after swap b is "<<b<<endl;
//}

//METHOD 2:WITHOUT USING 3RD VARIABLE.
int main(){
  int a=20;
  int b=10;
  cout<<"a is "<<a<<endl;
  cout<<"b is "<<b<<endl;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"after swap a is "<<a<<endl;
  cout<<"after swap b is "<<b<<endl;
}
