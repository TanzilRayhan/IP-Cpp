#include <iostream>

using namespace std;

int main()
{
   int sellingprice, costprice, sum;
   cout<<" Enter selling price: "<<endl;
   cin>>sellingprice;

   cout<<" Enter cost price: "<<endl;
   cin>>costprice;

   if (costprice<sellingprice)
        {sum=sellingprice-costprice;
    cout<<"Profit:"<<sum<<endl;}

   else if(costprice>sellingprice)
        {sum=costprice-sellingprice;
   cout<<"Loss:"<<sum<<endl;}


  return 0;
}
