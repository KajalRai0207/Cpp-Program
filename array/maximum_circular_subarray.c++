#include<iostream>
#include<climits>
using namespace std;
int kadane(int n,int ar[])
{
    int currsum=0;
    int maxsum=INT_MIN; 
    for(int i=0;i<n;i++)
    {
        currsum+=ar[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];              
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int wrapsum,unwrapsum;
   unwrapsum=kadane(n,arr);
   int totalsum=0;
   for(int i=0;i<n;i++)
   {
       totalsum+=arr[i];
       arr[i]=-arr[i];
   }
   wrapsum=totalsum+kadane(n,arr);
   cout<<max(wrapsum,unwrapsum)<<endl;

}