#include<bits/stdc++.h>
using namespace std;

long long maxKelements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        long long int sum=0;
        int i=0,ch;
        while(k>0){
            sum+=nums[i];
            cout<<nums[i]<<endl;
            ch=ceil(nums[i]/3);
            cout<<"ch="<<ch<<endl;
            nums[i]=ch;
            if(nums[i]<nums[i+1]){
                i++;
            }
            k--;
        }
        return sum;
}

int main()
{
    vector<int>nums{10,10,10,10,10};
    int k=5;
    cout<<maxKelements(nums,k);
    return 0;
}
