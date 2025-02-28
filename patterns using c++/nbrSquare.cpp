#include<iostream>
using namespace std;
int main(){

int n;

cout<<"enter numbr of rows: ";
cin>>n;

//for(int i=1; i<=n; i++){//rows
//    for(int j=1; j<=n; j++){//clms
//            cout<<j<<" ";
//}
//cout<<endl;
//}
//}

//1 2 3 4 IF n = 4,
//1 2 3 4
//1 2 3 4
//1 2 3 4

//1 1 1 1
//2 2 2 2 print i instead of j in the above program.
//3 3 3 3
//4 4 4 4

for(int i=1; i<=n; i++){//rows
    for(int j=1; j<=n; j++){//clms
            cout<<i<<" ";
}
cout<<endl;
}
}
