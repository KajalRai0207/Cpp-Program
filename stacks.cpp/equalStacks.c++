#include<bits/stdc++.h>
using namespace std;
int equalstacks(vector<int>h1,vector<int>h2,vector<int>h3,int n1,int n2,int n3)
{
    int s1=0,s2=0,s3=0;
    for(int i=0;i<n1;i++)
    {
        cin>>h1[i];
        s1+=h1[i];       
    }
    for(int i=0;i<n2;i++)
    {
        cin>>h2[i];
        s2+=h2[i];      
    }
    for(int i=0;i<n3;i++)
    {
        cin>>h3[i];
        s3+=h3[i];
    }
    int t1=0,t2=0,t3=0;
    while(1)
    {
        if(s1==s2 && s1==s3)
        {
            return s1;
        }
        if(s1==0 || s2==0 || s3==0)
        {
            return 0;
        }
        if(s1>=s2 && s1>=s3)
        {
            s1-=h1[t1++];
        }
        else if(s2>=s1 && s2>=s3)
        {
            s2-=h2[t2++];
        }
        else if(s3>=s1 && s3>=s2)
        {    
            s3-=h3[t3++];
        }
        
    }
}

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    
    vector<int>h1(n1);
    vector<int>h2(n2);
    vector<int>h3(n3);
    cout<<equalstacks(h1,h2,h3,n1,n2,n3);
    return 0;
}