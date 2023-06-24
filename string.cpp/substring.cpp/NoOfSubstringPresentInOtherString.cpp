#include<bits/stdc++.h>
using namespace std;

int CountOfSubstring(string s1,string s2){
    int ans=0;
    for(int i=0;i<s1.length();i++){
        string s3;
        for(int j=i;j<s1.length();j++){
            s3+=s1[j];
            if(s2.find(s3)!=string::npos){
                ans++;
            }
        }
    }
    return ans;
}


int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<CountOfSubstring(s1,s2);
    return 0;
}