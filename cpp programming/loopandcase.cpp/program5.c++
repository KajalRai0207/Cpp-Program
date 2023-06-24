#include<iostream>
using namespace std;
int main()
{
   int a,div=2;
   cin>>a;
   if(div<a)
   {
        if(a%div==0)
        {
             if(a%2==0)
             cout<<" non prime and even\n ";
             else 
             cout<<"non prime no. and odd\n";
        }
        else 
        div=div+1; 
    }
     if(a%2==0)
     cout<<"prime and even\n";
     else 
     cout<<"prime no. and odd\n";
    return 0;
}