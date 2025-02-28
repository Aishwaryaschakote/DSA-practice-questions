#include<iostream>
using namespace std;

int main(){
int arr[5]={2,3,4,0,6};
int sum=0;

//to get size of array use sizeof() method.
//INSTEAD OF USING 4 IN THE FOR LOOP ...
//WE CAN ALSO WRITE IT AS:
int n=sizeof(arr)/4;//4 cz it's integer array

for(int i=0; i<=n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0; i<=4; i++){
     sum=sum+arr[i];
    }
cout<<"sum of array elements is: "<<sum<<" ";
}






