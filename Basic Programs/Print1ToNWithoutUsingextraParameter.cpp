#include<iostream>
using namespace std;

//void print(int n){
//if(n==0) return;//base case
//cout<<n<<endl;//work
//print(n-1);//call
//}
//output: 10 9  8 ....1

void print(int n){
if(n==0) return;//base case
/////////swapped above 2 lines.
print(n-1);//call
cout<<n<<endl;//work
}
// now the op is 1 2 3 4 5 6 ....10
int main(){
int n;
cout<<"Enter n: ";
cin>>n;
print(n);
}
