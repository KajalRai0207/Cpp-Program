#include<bits/stdc++.h>
using namespace std;

int maxProductSubarray(vector<int>nums)
{
    int maxPro=nums[0];
    int n=nums.size();
    for(int i=0;i<n;i++){
        int pro=nums[i]; 
        for(int j=i+1;j<n;j++){
            pro*=nums[j];
            if(pro>maxPro){
                maxPro=pro;
            }
        }
        
    }
    return maxPro;
}
int main()
{
    vector<int>nums{-1, -3, -10, 0, 60};
    cout<<maxProductSubarray(nums);
    return 0;
}