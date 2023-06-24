#include<bits/stdc++.h>
using namespace std;

vector<int> MoveNegative(vector<int>&v){
    int low=0,high=v.size()-1;
    while(low<high){
        if(v[low]>0){
            low++;
        }
        else if(v[high]<0){
            high--;
        }
        else {
            swap(v[low],v[high]);
        }
    }
    return v;
}
int main()
{
    vector<int>v{-12, 11, -13, -5, 6, -7, 5, -3, -6};
    MoveNegative(v);
    for(auto x:v){
        cout<<x<<",";
    }
    return 0;
}