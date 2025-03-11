#include<iostream>
using namespace std;
int main(){
   int arr[4][2] = {{1,90},{2,79},{3,80},{4,98}};
   int mx=arr[0][0];

    for(int i=0; i<4; i++){
        for(int j=0; j<=1; j++){
            mx=max(mx,arr[i][j]);
        }
    }
    cout<<mx;
}
