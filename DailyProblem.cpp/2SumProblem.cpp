#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int>calc2SumProblem(vector<int>nums,int target){
    vector<int>res;
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        if(mp.find(target-nums[i])!=mp.end()){
            res.emplace_back(mp[target-nums[i]]);
            res.emplace_back(i);
            return res;
        }
        mp[nums[i]]=i;
    }
    return res;
}

int main()
{
    vector<int>nums{2,7,11,15};
    int target=9;
    vector<int>res=calc2SumProblem(nums,target);
    for(auto x:res){
        cout<<x;
    }
    return 0;
}