#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter limits"<<endl;
    cin>>n;
    int array[n];
    cout<<"Array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    const int N=1e5+2;
    int check[N];
    for(i=0;i<N;i++)
    {
        check[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(array[i]>=0)
        {
            check[array[i]]=1;
        }
    }
    int ans=-1;
    for(i=1;i<N;i++)
    {
        if(check[i]==0)
        {
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}
    