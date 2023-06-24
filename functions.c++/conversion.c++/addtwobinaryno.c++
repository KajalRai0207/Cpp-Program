#include<iostream>
using namespace std;
void addbinarynumber(int n1,int n2)
{
    int rem2=0,rem=0;
    while(n1>0 || n2>0)
    {
        rem=n1%10;
        n1=n1/10;
       
        rem2=n2%10;
        n2=n2/10;
     
        if(rem==0 && rem2==0)
        {
            cout<<"0";
        }
        else
        {
            {
                cout<<"1";
            }
        } 
    }   
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    addbinarynumber(n1,n2);
}