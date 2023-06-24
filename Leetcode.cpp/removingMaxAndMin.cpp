#include<bits/stdc++.h>
using namespace std;

int minimumDeletion(vector<int>&nums)
{
    int frontend=0,backend=0,bothend=0;
    int n=nums.size();
    int miniIndex=min_element(nums.begin(),nums.end())-nums.begin();
    int maxIndex=max_element(nums.begin(),nums.end())-nums.begin();
    if(miniIndex>maxIndex){
        swap(miniIndex,maxIndex);
    }
    frontend=maxIndex+1;
    backend=n-miniIndex;
    bothend=(n-maxIndex)+miniIndex+1;
    return min(bothend,min(frontend,backend));
}
int main()
{
    vector<int> nums;
    nums={-1,-53,93,-42,37,94,97,82,46,42,-99,56,-76,-66,-67,-13,10,66,85,-28};
    cout<<minimumDeletion(nums);   
    return 0;
}