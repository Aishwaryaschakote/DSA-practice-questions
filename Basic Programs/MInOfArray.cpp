#include<iostream>
using namespace std;

void change(int arr[]){
    arr[0]=20;
}

int main(){
int arr[5]={-20,-3,-41,-5,-60};
int mn=arr[0];//INT_MIN is the minimum value in the integers size.-2147483648
for(int i=0; i<=4; i++){
    // if(arr[i]<mn) mn=arr[i];
    mn=min(mn,arr[i]);
}
cout<<mn<<" ";
}








