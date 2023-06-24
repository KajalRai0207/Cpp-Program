#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter limits"<<endl;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int maxNo=-1;
    int count=0;
    for(int i=0;i<n;i++)
    {
       
        if(a[i]>maxNo && a[i]>a[i+1])
        {
            cout<<i+1<<" day "<<"was record breaking day with no. of visitors "<<a[i]<<endl;
            count+=1;
        }
        maxNo=max(maxNo,a[i]);

    }
    cout<<count<<endl;
    return 0;
}