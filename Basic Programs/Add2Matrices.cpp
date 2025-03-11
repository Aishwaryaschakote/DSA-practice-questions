#include<iostream>
using namespace std;
int main(){
   int arr1[2][2] = {{1,1},{2,2}};
   int arr2[2][2] = {{3,3},{4,4}};
   int arr3[2][2]={{0}};

   for(int i=0; i<2; i++){
        for(int j=0; j<=1; j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
    cout<<endl;
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<=1; j++){
            cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
    }
}
//
//4 4
//6 6
