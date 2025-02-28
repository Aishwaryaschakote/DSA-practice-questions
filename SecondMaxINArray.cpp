#include<iostream>
using namespace std;

int main(){
    int arr[] = {-10, -2, -3, -4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int mx = arr[0];
    for(int i = 0; i < n; i++){
        mx = max(mx, arr[i]);
    }
    cout << "First Maximum: " << mx << endl;

    int smx = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] != mx)
            smx = max(smx, arr[i]);
    }

    cout << "Second Maximum: " << smx << endl;
    return 0;
}

