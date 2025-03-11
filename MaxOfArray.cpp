#include<iostream>
using namespace std;

void change(int arr[]){
    arr[0]=20;
}

int main(){
int arr[5]={2,3,41,5,6};
int mx=arr[0];
for(int i=1; i<=4; i++){
    // if(arr[i]>mx) mx=arr[i];
    mx=max(mx,arr[i]);
}
cout<<mx<<" ";
}







