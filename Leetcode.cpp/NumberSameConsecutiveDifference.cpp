#include<bits/stdc++.h>
using namespace std;
void DFS(int num,int n,int k,vector<int>&result){
    if(n==0){
        result.push_back(num);
        return;
    }
    int last_digit=num%10;
    if(last_digit-k>=0){
        DFS(num*10+last_digit-k,n-1,k,result);
    }
    if(k>0 && last_digit+k<10){
        DFS(num*10+last_digit+k,n-1,k,result);
    }
}
vector<int> numsSameConsecDiff(int n, int k) {
    vector<int>result;
    
    if(n==1){
       result.push_back(0); 
    }
    for(int i=1;i<10;i++){
        DFS(i,n-1,k,result);
    }
    return result;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>ans;
    ans=numsSameConsecDiff(n,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}