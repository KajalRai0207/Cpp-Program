#include<iostream>
using namespace std;
int main()
{

    cout<<"enter limit"<<endl;
    int n,temp,current,j;
    cin>>n;
    cout<<"enter array elements"<<endl;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=1;i<n;i++)
    {
        current=array[i];
        j=i-1;
        while(array[j]>current && j>=0)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=current;

    }
    for(int j=0;j<n;j++)      
    {
        cout<<array[j]<<" ";
    }
}