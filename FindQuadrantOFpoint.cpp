#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;

    if(x>0 && y>0){
        cout<<"the point is in 1st Q";
    }
    else if(x<0 && y<0){
        cout<<"the point is in 3rd Q";
    }
    else if(x>0 && y<0){
        cout<<"the point is in 4th Q";
    }
    else if(x<0 && y>0){
        cout<<"the point is in 2nd Q";
    }
    else{
        cout<<"it's in origin";
    }

}
