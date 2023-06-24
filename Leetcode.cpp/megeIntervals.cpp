#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeInterval(vector<vector<int>>&interval){
    sort(interval.begin(),interval.end());
    vector<vector<int>>merge;
    vector<int>mer;
    for(int i=0;i<interval.size();i++){
        if(merge.empty()||merge.back()[1]<interval[i][0]){
            vector<int>mer{interval[i][0],interval[i][1]};
            merge.push_back(mer);
        }
        else{
            merge.back()[1]=max(merge.back()[1],interval[i][0]);
        }
    }
    return merge;
}

int main()
{
    vector<vector<int>>matrix{{1,3},{2,6},{15,18},{8,10}};
    int n=matrix.size();
    vector<vector<int>>ans=mergeInterval(matrix);
    for(auto it:ans){
        cout<<it[0]<<" "<<it[1]<<endl;
    }
    return 0;
}