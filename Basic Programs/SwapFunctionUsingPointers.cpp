//PASS BY REFERENCE TOPIC WHICH USES & SYMBOL FOR ADDRESSES..
#include<iostream>
using namespace std;

int swap(int* a, int* b){
int temp=*a;
  *a=*b;
  *b=temp;
}


int main(){
  int x=10;
  int y=20;
  cout<<"x is "<<x<<endl;
  cout<<"y is "<<y<<endl;
  swap(&x,&y);
  cout<<"after swap z is "<<x<<endl;
  cout<<"after swap y is "<<y<<endl;
}

//x is 10
//y is 20
//after swap z is 20
//after swap y is 10
