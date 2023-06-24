#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    int ClosestNum=INT_MAX;
    sort(nums.begin(),nums.end()); 
    for(int i=0;i<nums.size()-2;i++){
        int ptr1=i+1,ptr2=nums.size()-1;
        while(ptr1<ptr2){
            int sum=0;
            sum=nums[i]+nums[ptr1]+nums[ptr2];
            if(sum==target){
                return target;
            }
            else if(abs(sum-target)<abs(ClosestNum-target)){
                ClosestNum=sum;
            }
            if(sum<target){
                ptr1++;
            }
            if(sum>target){
                ptr2--;
            }

        }
    }
    return ClosestNum;
}

int main()
{
    vector<int>nums{1,1,1,0};
    int target=100;
    cout<<threeSumClosest(nums,target);
    
    return 0;
}