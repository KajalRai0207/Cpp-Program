#include<iostream>
using namespace std;
int main()
{
    int i,j ,k,space,row,space2;
    cout<<"enter the no. of row\n";
    cin>>row;
    space=row-1;
    space2=1;
    for(i=1;i<=row;i++)
    {
         for(k=1;k<=space;k++)
         {
            cout<<" ";
         }
         space--;
             for(j=1;j<=2*i-1;j++)
             {
               if(i==1||j==1||j==(2*i-1)||i==row)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
               
             }
             cout<<"\n";
    
            
            for(k=1;k<=space2;k++)
        {
            cout<<" ";
        }
        space2++;
            for(j=1;j<=2*(row-i)+1;j++)
            {
               if(i==1||j==1||j==2*(row-i)+1||i==row)
               {
                   cout<<"*";
               }
               else
               {
                   cout<<" ";
               }
               
            }
            cout<<"\n";
    }
    return 0;
}