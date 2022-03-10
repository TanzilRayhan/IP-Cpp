#include<iostream>
using namespace std;
int main()
{
    int number,reminder;
    cout<<"Enter the expressions:"<<endl;
    cin>>number;

    reminder = number % 2;
    if (number>=0 && reminder==0)
        cout<<"The number is even."<<endl;
    else
        cout<<"The number is odd."<<endl;
    return 0;

}
