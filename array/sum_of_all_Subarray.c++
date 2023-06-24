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
    for(i=0;i<n;i++)
    {
        int sum=0; 
        for (j=i;j<n;j++)
        {
            sum=array[j]+sum;
            cout<<"Sum="<<sum<<endl;
                
        }
    }
    return 0;
}