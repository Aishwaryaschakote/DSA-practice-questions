#include<iostream>
using namespace std;
int main(){
int l=2,b=4;
 int area=l*b;
int perimeter=2*(l+b);
if(area>perimeter)
{cout<<"area is greater than perimeter "<<endl;
cout<<area<<"cm^2";
}
else{
    cout<<"perimeter is greater than area of rectangle "<<perimeter<<"cm";
}
}
