#include<iostream>
using namespace std;
int main()
{
    int value1, value2, value3;
    cout<<"Enter value 1:"<<endl;
    cin>>value1;
    cout<<"Enter value 2:"<<endl;
    cin>>value2;
    cout<<"Enter value 3:"<<endl;
    cin>>value3;

    if (value1+value2+value3==180)

        cout<<"Valid triangle"<<endl;

    else
        cout<<"Invalid triangle"<<endl;

 return 0;
}
