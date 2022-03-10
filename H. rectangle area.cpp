#include<iostream>
using namespace std;
int main()
{
    int length, breadth;
    cout<<"Enter the length:"<<endl;
    cin>>length;
    cout<<"Enter the breadth:"<<endl;
    cin>>breadth;

    int area, perimeter;

    area=length*breadth;
    perimeter=2*(length+breadth);
    if
    (area>perimeter)
        cout<<"Area is greater."<<endl;
    else
        cout<<"Perimeter is greater."<<endl;

    return 0;

}
