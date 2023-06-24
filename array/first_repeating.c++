#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter limits"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements"<<endl;;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxNO=INT_MIN;
    for(i=0;i<n;i++)
    {
        maxNO=max(maxNO,a[i]);
    }
    int array[maxNO];
    for(i=0;i<maxNO;i++)
    {
        array[i]=-1;
    }
    int recurr = INT_MAX;
    cout<<recurr<<endl;
    for(i=0;i<n;i++)
    {
        if(array[a[i]]!=-1)
        {
            cout<<recurr<<" ";
            recurr=min(recurr,array[a[i]]);
            cout<<recurr<<endl;
            
        }
        else
        {
            array[a[i]]=i;
        }
        
    }
    if(recurr == INT_MAX)
    {
        cout<<"no element is re-occuring"<<endl;
    }
    else
    {
        cout<<"index of first recurring element="<<recurr+1;
        
    }
    return 0;
}