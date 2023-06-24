#include <bits/stdc++.h>
using namespace std;
int substring(string str1,string str2)
{
    int m=str1.length();
    int n=str2.length();
    for(int i=0;i<m-n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(str1[i]!=str2[j]) 
           {
               break;
           }
           else{
               i+=1;
               cout<<"i="<<i<<endl;
               cout<<"j="<<j<<"n="<<n<<endl;
           }
           if((j+1)==n)
           {
               
               return i;
           }
        }
    }
    return -1;
}
int main()
{
    string str1="mynameiskajalrai";
    string str2="is";
    int res=-1;
    res=substring(str1,str2);
    if (res==-1)
    {
        cout<<"there is no such substring in the given string";
    }
    else{
        cout<<"the substring is found at position ="<<res;
    }

}