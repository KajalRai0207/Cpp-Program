#include<iostream>
#include<climits>
using namespace std;
int main()
{ 
    int n;
    cout<<"limits";
    cin>>n;
    int array[n];
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=array[k];
            }
            max_sum=max(sum,max_sum);
        }
    }
    cout<<max_sum;
    return 0;
}