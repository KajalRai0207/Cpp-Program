#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int maxPro=0,min=INT_MAX;
    int n=prices.size();
    for(int i=0;i<n;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        if(prices[i]-min>maxPro){
            maxPro=prices[i]-min;
        }
    }
    return maxPro;
}
int main()
{
    vector<int>prices{2,4,1};
    cout<<maxProfit(prices);
    return 0;
}