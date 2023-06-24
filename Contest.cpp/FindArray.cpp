#include<bits/stdc++.h>
using namespace std;

vector<int> findArray(vector<int>& pref) {
    vector<int> vec;
    vec.push_back(vec[0]);
    for(int i=0;i<pref.size()-1;i++){
        vec.push_back(pref[i]^pref[i+1]);
    }
    return vec;
        
}

int main()
{
    vector<int>pref{5,2,0,3,2};
    vector<int>v;
    
    return 0;
}