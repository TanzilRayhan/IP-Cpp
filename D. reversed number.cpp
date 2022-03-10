#include<iostream>
using namespace std;
int main()
{
    int x,a,b,c,d,e,rev;
    cout<<"Enter Five Digits: " ;
    cin>>x;

    a= x/10000;
    b=(x%10000)/1000;
    c=(x%1000)/100;
    d=(x%100)/10;
    e=(x%10);

    rev=e*10000+d*1000+c*100+b*10+a;

    if (x==rev)
    {
        cout<<"The reversed number is: "<<rev<<endl;
    }

}
