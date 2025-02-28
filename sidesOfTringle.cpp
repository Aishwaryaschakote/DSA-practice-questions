#include <iostream>
using namespace std;
int main() {
   int s1,s2,s3;
   cout<<"enter the s1:";
   cin>>s1;
   cout<<"enter the s2:";
   cin>>s2;
    cout<<"enter the s3:";
   cin>>s3;
   if((s1+s2)>s3 && (s2+s3)>s1 && (s3+s1)>s2 )
   {
       cout<<"valid tringle";
   }
   else{
       cout<<"invalid";
   }
    return 0;
}
