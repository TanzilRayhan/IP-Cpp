#include<iostream>
using namespace std ;
int main()
{
    int i;
    float f=1.0, k, sum=0;
    for (i=1;i<8;i++)
    {
        f = f * i;
        k = i/f;
        sum = sum + k;
    }

    cout <<sum ;
    return 0;
}
