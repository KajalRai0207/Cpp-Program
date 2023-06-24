#include<bits/stdc++.h>
using namespace std;
vector<int>nextPermutation(vector<int>v){
    int n=v.size();
    int i,j;
    for(i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            break;
        }
    }
    for(j=n-1;j>=0;j--){
        if(i<0){
            reverse(v.begin(),v.end());  
            return v;
        }
        if(v[j]>v[i]){
            break;
        }
    }
    swap(v[i],v[j]);
    reverse(v.begin()+i+1,v.end());
    return v;
}
int main()
{
    vector<int>v{5,4,3,2,1};
    vector<int>res=nextPermutation(v);
    for(int i=0;i<v.size();i++){
        cout<<res[i];
    }
    return 0;
}