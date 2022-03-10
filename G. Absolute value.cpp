#include<iostream>
using namespace std;
int main ()
{
int num;
cout<<"Enter number:" <<endl;
cin>>num;
if ( num< 0 )
    num = -num;
cout<<"The absolute value is : "<<num<<endl;
return 0;
}
