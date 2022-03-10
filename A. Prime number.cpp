#include<iostream>

using namespace std;

int main(){

    int num=300;
    int i,j,prime;

    for(i=2;i<=num;i++)
        {
        prime=0;

        for(j=2;j<i;j++){
            if(i%j==0){
                prime=1;
                break;
            }

        }

     if(prime==0)
        cout<<i<<" ";

    }


return 0;
}
