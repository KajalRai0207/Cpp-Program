#include<iostream>
using namespace std;
int main()
{
    int rem,num,n,rev=0;
    cout<<"enter no.\n";
    cin>>num;
    n=num;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(num==rev)
    cout<<"palindrome number\n";
    else
    {
       cout<<"not a palindrome number\n";
    }
    return 0;
}