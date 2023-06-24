#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of integers";
    cin>>n;
    int arr[n];
    int ar1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0,i=n-1;j<n;j++,i--)
    {
       ar1[j]=arr[i]; 
    }
     for(int i=0;i<n;i++)
    {
        cout<<ar1[i]<<" ";
    }
}