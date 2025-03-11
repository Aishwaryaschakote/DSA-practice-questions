#include<iostream>
using namespace std;

int main(){
int n;
int arr[10];//Declaration.
cout<<"Entr no of elements:";
cin>>n;

cout<<"Entr "<<n<<" array elements:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"UPDATED VALUE OF ARRAY:"<<endl;
arr[0]=202;//updated value
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}




