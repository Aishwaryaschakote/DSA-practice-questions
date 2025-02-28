#include<iostream>
using namespace std;
int main(){
   int arr1[2][3] = {{1,1,4},{3,2,2}};
   int arr3[3][2];

     for(int i=0; i<2; i++){
        for(int j=0; j<=2; j++){
            cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
    }
   for(int i=0; i<2; i++){
        for(int j=0; j<=2; j++){
            arr3[j][i]=arr1[i][j];
    }
    cout<<endl;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<=1; j++){
            cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
    }
}
//
//4 4
//6 6
