#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=10;i++){// i is declared inside the loop.
        cout<<i<<endl;
    }
    cout<<i;//it ll give the error that cz,i is not accessible out of the loop cz it has scope only inside for loop..
}
