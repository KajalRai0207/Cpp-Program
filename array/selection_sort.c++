#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,index;
    int n; 
    cin>>n;
    int array[n];
    cout<<"enter the elements of array"<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[i])
            {
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;

            }
        }
    }
    cout<<"sorted array";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}