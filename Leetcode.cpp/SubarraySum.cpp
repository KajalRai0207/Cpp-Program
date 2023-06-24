#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
    int maxSum=INT_MIN,currSum=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        currSum+=nums[i];
        if(currSum>maxSum){
            maxSum=currSum;
        }
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}
int main()
{
    vector<int>nums{-5};
    cout<<maxSubArray(nums);
    return 0;
}