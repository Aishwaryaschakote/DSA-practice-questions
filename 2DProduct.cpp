#include<iostream>
using namespace std;
int main(){
   int arr[4][2] = {{1,3},{2,4}};

    int product=1;
    for(int i=0; i<2; i++){
        for(int j=0; j<=1; j++){
           cout<<arr[i][j]<<" ";
           product = product*arr[i][j];
        }
        cout<<endl;
    }

    cout<<product;
}
//1 3
//2 4
//24
