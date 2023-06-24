#include<bits/stdc++.h>
using namespace std;
void subsequence(int ind,int n,vector<int>&ds,vector<int>arr,int s,int currsum){
        if(ind==n){
             if(currsum==s){
                 for(auto it:ds){
                     cout<<it<<" ";
                 }
                 cout<<endl;
             }
             return;
        }
        // to pick the element
        //cout<<arr[ind];
        ds.push_back(arr[ind]);
        currsum+=arr[ind];
        subsequence(ind+1,n,ds,arr,s,currsum);
        
        // to not pick
        ds.pop_back();
        currsum-=arr[ind];
        subsequence(ind+1,n,ds,arr,s,currsum);
    }
int main()
{
    vector<int>arr{1,2,3,7,5,9};
    vector<int>ds;
    int currsum=0;
    subsequence(0,6,ds,arr,12,currsum);
    return 0;
}