#include<iostream>
using namespace std;
int binarytodecimal(int n)
{
    int c,sum=0,c1=1;
    while(n>0)
    {
            
        c=n%10;
        sum+=c*c1;
        c1*=8;
        n/=10;
    }
        
    
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<binarytodecimal(n);
}