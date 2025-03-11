#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="ujalsa";
    cout<<s<<endl;
    int n=s.length();//n=6
    reverse(s.begin(), s.begin()+n/2);
    cout<<s<<endl;

}
//ujalsa
//ajulsa

