// compexity=O(N)
#include<iostream>
using namespace std;
int linear_search(int key,int n,int array[])
{
    for(int i=0;i<n;i++)
    {
        if(key==array[i])
        {
            cout<<"found at index ";
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the limit"<<"\n";
    cin>>n;

    int array[n];
    cout<<"enter the elements of array"<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int key;
    cout<<"Enter the key"<<"\n";
    cin>>key;
    cout<<linear_search(key,n,array);
}