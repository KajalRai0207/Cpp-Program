#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    system("CLS");
    int n,i,flag=0;
    cout<<"enter a number\n";
    cin>>n;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {    
            cout<<"non prime";  
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"prime no.";
}

//prime number in given range

#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j;
    cout<<"Enter the lower range";
    cin>>a;
    cout<<"Enter the upper range";
    cin>>b;
    for(i=a;i<=b;i++)
    {
        int count=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count+=1;
                break;
            }
            else
            {
                continue;
            }
            
        }
        if(count==0)
        {
            cout<<i<<" ";
        }

    }
}