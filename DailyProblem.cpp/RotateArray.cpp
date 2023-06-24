#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>&nums,int k){
    int key=k%nums.size();
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+key);
    reverse(nums.begin()+key,nums.end());
    return;
}

int main()
{
    vector<int>nums{1,2,3,4,5};
    int k=3;
    rotate(nums,k);    
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}