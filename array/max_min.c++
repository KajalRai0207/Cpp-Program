#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int array[n];
    cout<<"please enter the numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int maxNO=INT_MIN;     //array[0];
    int minNO=INT_MAX;   //array[0];
    // for(int i=1;i<n;i++)
    // {
    //     if(array[i]>max)
    //     {
    //         max=array[i];
    //     }
    //     if(array[i]<min)
    //     {
    //         min=array[i];
    //     }
    // }
    for(i=0;i<n;i++)
    {
        maxNO=max(maxNO,array[i]);
        minNO=min(minNO,array[i]);
    }
    cout<<"maximum="<<maxNO<<endl;
    cout<<"minimum="<<minNO<<endl;
    return 0;
}