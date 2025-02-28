#include<iostream>
using namespace std;

void change(int arr[]){
    arr[0]=20;
}

int main(){
int arr[5]={2,3,4,5,6};

for(int i=0; i<=4; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
change(arr);
for(int i=0; i<=4; i++){
    cout<<arr[i]<<" ";
}
}






