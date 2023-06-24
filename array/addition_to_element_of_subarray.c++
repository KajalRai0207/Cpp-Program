// time complexity O(n^2)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,n,s;
//     cout<<"enter limits"<<endl;
//     cin>>n;
//     int array[n];
//     cout<<"Array elements"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>array[i];
//     }
//     cout<<"enter sum=";
//     cin>>s;
//     for(i=0;i<n;i++)
//     {
//         int sum=0; 
//         for (j=i;j<n;j++)
//         {
//             sum=array[j]+sum;
//             // cout<<"Sum="<<sum<<endl;
//             if(sum==s)
//             {
//                 cout<<i+1<<",";
//                 cout<<j+1<<endl;;
//                 return 0;
//             }
                
//         }
//     }
//     return 0;
// }

// time complexity O(n)

#include<iostream>
using namespace std;
int main()
{
    int st=0,end=0,i,n,s;
    cout<<"enter limits"<<endl;
    cin>>n;
    int array[n];
    cout<<"Array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"enter sum=";
    cin>>s;

    int current_sum=0;
    while(current_sum<=s && array[end]<=s)
    {
        current_sum+=array[end];
        // cout<<"current_sum"<<current_sum;
        end++;
    }
    if(current_sum==s)
    {
        cout<<st+1<<","<<end;
        return 0;
    }
    while(current_sum>=s)
    {
        current_sum-=array[st];
        st++;
        if(current_sum==s)
        {
            cout<<st+1<<","<<end;
            return 0;
        }
    }
    return 0;
}


    