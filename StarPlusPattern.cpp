#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter n:";
    cin>>n;

//int mid = n/2 +1;
//
//for(int i=1; i<=n; i++){//rows
//    for(int j=1; j<=n; j++){//clms
//            if(i==mid || j==mid)
//                cout<<"*"<<" ";
//            else{
//                cout<<"#"<<" ";
//            }
//}
//cout<<endl;
//}


for(int i=1; i<=n; i++){//rows
    for(int j=1; j<=n; j++){//clms
            if(i==3 || j==3)
                cout<<"*"<<" ";
            else{
                cout<<" "<<" ";
            }
}
cout<<endl;
}


//for(int i=1; i<=n; i++){//rows
//    for(int j=1; j<=n; j++){//clms
//            if(i==3 || j==3)
//                cout<<"*"<<" ";
//            else{
//                cout<<"#"<<" ";
//            }
//}
//cout<<endl;
//}
}


//# # * # #
//# # * # #
//* * * * *
//# # * # #  STAR-PLUS PATTERN
//# # * # #

