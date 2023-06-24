#include<iostream>
using namespace std;
int main()
{
   int i,j,k,row,space;
   cout<<"enter the no of row\n";
   cin>>row;
   space=row-1;
   for(i=1;i<=row;i++)
   {
       for(k=1;k<=space;k++)
       {
           cout<<" ";
       }
       space--;
       for(j=i;j>=1;j--)
       {
           cout<<j;
       }
       for(j=2;j<=i;j++)
       {
           cout<<j;
       }
       cout<<"\n";
   }
    return 0;
}