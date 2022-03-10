#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int a=0,b=1,c=0,fibo,n;
   cout<<"Enter value: "<<endl;
   cin>>n;
   while(c<n)
   {
       if(c<=1){fibo=c;}
       else{fibo=a+b;
            a=b;
            b=fibo;}
            cout<<fibo<<" ";;
            c++;
   }


}
