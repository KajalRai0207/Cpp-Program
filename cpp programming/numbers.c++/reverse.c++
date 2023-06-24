#include<iostream>
using namespace std;
int main()
{
    int rev=0,n,rem;
    cout<<"enter number";
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }    
    cout<<"reverse of num is = "<<rev;
    return 0;
}