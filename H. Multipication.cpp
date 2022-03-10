#include <iostream>
using namespace std;
int main()
{
    int number , x, result;

    cout<<"Enter number : ";

    cin>>number;

    for (x=1; x<=10; x++)
    {
        result= number*x;
        cout<<number<<"*" <<x <<"=" <<result<<endl;
    }
    return 0;
}
