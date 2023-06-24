#include<iostream>
#include<vector>
using namespace std;

vector<int> runningSum(vector<int>&nums)
{
    vector<int>v1(nums.size());
    v1[0]=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        v1[i]=v1[i-1]+nums[i];
    }
    return v1;
}
int main()
{
    vector<int>nums;
    nums={1,2,3,4};
    vector<int> vec=runningSum(nums);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}