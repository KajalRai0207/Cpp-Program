#include<iostream>
#include<climits>
using namespace std;
int main()
{
    string str1="";
    int n;
    cin>>n;
    int num=n;
    int i=0;
    while(n!=0)
    {
        int rem=n%2;
    
        n=n/2;
        string str=to_string(rem);
        str1=str1+str;
        i++;

    }
    int count=0;
    int m=INT_MIN;
    for(int j=0;j<i;j++)
    {
        if(str1[j]=='1')
        {
            count+=1;
        }
        else{
            count=0;
        }
        m=max(m,count);
    }
    cout<<m;

}