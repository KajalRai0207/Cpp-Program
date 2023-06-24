#include<iostream>
#include<vector>
using namespace std;

bool isSubsequence(string s,string t)
{
    if(s.empty()){
        return true;
    }
    int j=0;
    for(int i=0;i<t.length();i++){
        if(s[j]==t[i]){
            j++;
            if(j==s.size()){
                return true;
            }
        }
    }
        return false;
}
int main()
{
    string s,t;
    cin>>s>>t;
    if(isSubsequence(s,t)==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}