#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>calc4SumProblem(vector<int>&nums,int target){
    set<vector<int>>s;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                int x=target-(long long)nums[i]-(long long)nums[j]-(long long)nums[k];
                if(binary_search(nums.begin()+k+1,nums.end(),x)){
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    v.push_back(x);
                    sort(v.begin(),v.end());
                    s.insert(v);
                }
            }
        }
    }
    vector<vector<int>>res(s.begin(),s.end());
    return res;
}

int main()
{
    vector<int>nums{4,3,3,4,4,2,1,2,1,1};
    vector<vector<int>>res;
    int target=9;
    res=calc4SumProblem(nums,target);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[0].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}