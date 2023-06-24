#include<iostream>
using namespace std;
int main()
{
    cout<<"enter limit"<<endl;
    int n,temp;
    cin>>n;
    cout<<"enter array elements"<<endl;
    int array[n];
    for(int i=0;i<n;i++)      
    {
        cin>>array[i];
    }
    for(int i=1;i<n;i++)
    {
        for (int j=0;j<=n-i;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;

            }
        }
    }
    cout<<"Sorted array";
    for(int i=0;i<n;i++)      
    {
        cout<<array[i]<<" ";
    }
}