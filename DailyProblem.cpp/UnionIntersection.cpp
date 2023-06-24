#include<bits/stdc++.h>
using namespace std;
vector<int> findUnionIntersection(vector<int>&nums1,vector<int>&nums2){
    vector<int>ans;
    set<int>s1,s2;
    for(int i=0;i<nums1.size();i++){
        s1.insert(nums1[i]);
    }
    for(int i=0;i<nums2.size();i++){
        s2.insert(nums2[i]);
    }
    for(auto i=s2.begin();i!=s2.end();i++){
        if(s1.count(*i))
        {
            ans.push_back(*i);
        }
    }
    return ans;
}

int main()
{
    vector<int>v1{8,9,1,10};
    vector<int>v2{1,4,2,3,5};
    vector<int>ans=findUnionIntersection(v1,v2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}