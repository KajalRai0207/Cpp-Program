#include<iostream>
using namespace std;
int binary_search(int n,int array[],int key)
{
    int mid=n/2;
    if(key==array[mid])
    {
        return mid;
    }
    else if(key<array[mid])
    {
        for(int i=0;i<mid;i++)
        {
            if(key==array[i])
            {
                return i;
            }
        }
    }
    else if(key>array[mid])
    {
        for(int i=mid;i<n;i++)
        {
            if(key==array[i])
            {
                return i;
            }
        }
    }
    return -1;

}
int main()
{
    cout<<"enter limit"<<endl;
    int n;
    cin>>n;
    cout<<"enter array elements"<<endl;
    int array[n];
    for(int i=0;i<n;i++)      
    {
        cin>>array[i];
    }
    cout<<"enter key"<<endl;
    int key;
    cin>>key;
    cout<<"element found at index ";
    cout<<binary_search(n,array,key);
}

                              //OR



#include<iostream>
using namespace std;
int binary_search(int n,int array[],int key)
{
   int f=0;
   int l=n;
   int mid;
   while(f<=l)
   {
       mid=(f+l)/2;
       if(key==array[mid])
        {
            return mid;
        }
        else if(key<array[mid])
        {
            l=mid-1;
        }
        else
        {
            f=mid+1;
        }
   }
   return -1;

}
int main()
{
    cout<<"enter limit"<<endl;
    int n;
    cin>>n;
    cout<<"enter array elements"<<endl;
    int array[n];
    for(int i=0;i<n;i++)      
    {
        cin>>array[i];
    }
    cout<<"enter key"<<endl;
    int key;
    cin>>key;
    cout<<"element found at index ";
    cout<<binary_search(n,array,key);
}