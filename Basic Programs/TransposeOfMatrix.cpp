#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0]=1;
    arr[0][1]=2;
    arr[0][2]=3;
    arr[1][0]=4;
    arr[1][1]=5;
    arr[1][2]=6;
    for(int i=0; i<2; i++){
        for(int j=0; j<=2; j++){
            cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
     cout<<endl;
      for(int j=0; j<3; j++){
        for(int i=0; i<=1; i++){
            cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
}


 // TRANSPOSE OF MATRIX IS......
//1 2 3
//4 5 6
//
//1 4
//2 5
//3 6
//
