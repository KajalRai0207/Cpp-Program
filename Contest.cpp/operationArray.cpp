#include<bits/stdc++.h>
using namespace std;
vector<int> applyOperations(vector<int>& nums) {
    for(int i=0;i<nums.size()-1;i++){
        int j=i+1;
        if(nums[i]==nums[j]){
            nums[i]*=2;
            nums[j]=0;
        }
    } 
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
            }
        }
    }
    return nums;
        
}
int main(){
    vector<int>nums{847,847,0,0,0,399,416,416,879,879,206,206,206,272};
    vector<int>ans;
    ans=applyOperations(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
