#include<bits/stdc++.h>
using namespace std;
int LongestSubstring(string s){
    vector<int>v1;
    int ans=0,count=1;
    for(int i=0;i<s.length();i++){
        if(v1.empty()){
            v1.push_back(s[i]);
        }
        else{
            if(find(v1.begin(),v1.end(),s[i])!=v1.end()){
                ans=max(ans,count);
                count=1;
                v1.clear();
                v1.push_back(s[i]);
            }
            else{
                v1.push_back(s[i]);
                count++;
            }
        }
    }
    return ans;
}
int main()
{
    string s="abcabcab";
    cout<<LongestSubstring(s);
    return 0;
}