#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    string s="aishu";

    cout<<s<<endl;
    reverse(s.begin()+2, s.begin()+5);
    cout<<s<<endl;

}

//aishu
//aiuhs
