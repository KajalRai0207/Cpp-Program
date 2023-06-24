                        //O(n^2)

// #include<iostream>
// #include<string>
// using namespace std;

// bool isIsomorphic(string s,string t){
//     if(s.length()!=t.length()){
//         return false;
//     }
//     for(int i=0;i<s.length();i++){
//         for(int j=1;j<s.length();j++){
//             if(s[j]==s[i]){
//                 if(t[j]!=t[i]){
//                     return false;
//                 }
//             }
//             else{
//                 if(t[j]==t[i]){
//                     return false;
//                 }
//             }
//         }
//     }
//     return true;
// }
// int main()
// {
//     string s,t;
//     cin>>s>>t;
//     if(isIsomorphic(s,t)==true){
//         cout<<"true";
//     }
//     else{
//         cout<<"false";
//     }
//     return 0;
// }


                                               //O(n)


#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    int lenS=s.length();
    int lenT=t.length();
    if(lenS!=lenT){
        return false;
    }

    bool mark[256]={false};
    int map[256];
    memset(map,-1,sizeof(map));
    for(int i=0;i<s.length();i++){

        if(map[s[i]]==-1){
            if(mark[t[i]]==true){
                return false;
            }
            mark[t[i]]=true;
            map[s[i]]=t[i];
        }

        else if(map[s[i]]!=t[i]){
            return false;
        }
    }
    return true;
}
int main()
{
    string s,t;
    cin>>s>>t;
    if(isIsomorphic(s,t)==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    return 0;
}