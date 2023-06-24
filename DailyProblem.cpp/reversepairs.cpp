#include<bits/stdc++.h>
using namespace std;

int reversepairs(vector<int>&nums){
        // Your code here
        sort(nums.begin(),nums.end(),greater<int>());
        int count=0;
        int i=0;
        for(int j=i+1;j<nums.size();j++){
            cout<<nums[i]<<2*nums[j]<<endl;
            if(nums[i]>2*nums[j]){
                count++;
            }
            i++;
        }
        return count;
    }

int main()
{
    vector<int>nums{1,3,2,3,1} ;
    cout<<reversepairs(nums);
    return 0;
}