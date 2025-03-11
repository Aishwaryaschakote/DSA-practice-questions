#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"enter a string:";
    getline(cin, s);

    for(int i=0;i<=s.length();i++){
        if(i%2==0){
            s[i]='A';
        }
    }
    cout<<s;

}
