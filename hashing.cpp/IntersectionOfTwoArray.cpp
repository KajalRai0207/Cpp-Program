#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int>s;
    vector<int>v1;
    for(int i=0;i<nums1.size();i++){
        int key=nums1[i];
        s[key]++;
    }
    for(int i=0;i<nums2.size();i++){
        if(s.find(nums2[i])!=s.end()){
            v1.push_back(nums2[i]);
            s.erase(nums2[i]);
        }
    }
    return v1;
}
int main(){
    vector<int>nums1{4,9,5};
    vector<int>nums2{9,4,9,8,4};
    vector<int>ans;
    ans=intersection(nums1,nums2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    return 0;
}