#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter limits"<<endl;
    cin>>n;
    int array[n];
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int mx=INT_MIN;
    for (i=0;i<n;i++)
    {
        mx=max(mx,array[i]);
        cout<<mx<<endl;;
    }
    
}