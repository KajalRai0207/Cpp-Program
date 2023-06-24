#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];              
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int currsum=0;
    int maxsum=INT_MIN; 
    for(int i=0;i<n;i++)
    {
        currsum+=a[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    cout<<maxsum;
    return 0;
}