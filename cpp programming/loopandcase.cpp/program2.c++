#include<iostream>
using namespace std;
int main()
{
   int savings;
   cin>>savings;
   if(savings>5000)
   {
      if(savings>20000)
      cout<<"take neha to road trip\n";
      else 
      cout<<"take neha for shopping\n";
   }
   if(savings>3000)
   {
      if(savings>2000)
      cout<<"take puja to restraunt\n";
      else
      cout<<"take puja to local shop\n";
   }
   else
      cout<<"go out with friends";
   return 0;   
}