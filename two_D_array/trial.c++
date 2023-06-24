#include<iostream>
using namespace std;
int *matchingString(int q,int n,string strings[],string queries[])
{
    int *result=new int[q];
    int count;
    for(int j=0;j<q;j++)
    {
        count=0;
        for(int i=0;i<n;i++)
        {
            if(queries[j]==strings[i])
            {
                count+=1;
            }
        }
        result[j]=count;
        
    }
    return result;
}
int main()
{
    system("CLS");
    int n,q;
    cin>>n;
    string strings[n];
    for(int i=0;i<n;i++)
    {
        cin>>strings[i];
    }
    cin>>q;
    string queries[q];
    for(int i=0;i<q;i++)
    {
        cin>>queries[i];
    }
    int *p;
    p=matchingString(q,n,strings,queries);
    for(int i=0;i<q;i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}