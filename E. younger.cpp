#include<iostream>

using namespace std;

int main()
{
    int ram,shyam,ajay;
    cout<<"Enter the age of ram:"<<endl;
    cin>>ram;
    cout<<"Enter the age of shyam:"<<endl;
    cin>>shyam;
    cout<<"Enter the age of ajay:"<<endl;
    cin>>ajay;

    if (ram<ajay && ram<shyam)
    cout<<"Ram is younger";
    else if (ajay<ram && ajay<shyam)
    cout<<"Ajay is younger";
    else
    cout<<"Shyam is younger"<<endl;
    return 0;

}
