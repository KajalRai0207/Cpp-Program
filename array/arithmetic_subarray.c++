#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter limits"<<endl;
    cin>>n;

    int a[n];
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int j=2;
    int d=a[0]-a[1];
    int count=2;
    int ans=2;
    while(j<n)
    {
        if(a[j]-a[j-1]==d)
        {
            count+=1;
            
        }
        
        else
        {
            d=a[j]-a[j-1];
            count=2;
            
        }
        ans=max(count,ans);
        j++;
    }
    cout<<"Longest arithmetic subarray ="<<ans<<endl;
}