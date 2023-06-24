#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    vector<int>v{1,2,3,4,7,9};
    sort(v.begin(),v.end());
    cout<<k<<"th smallest element"<<v[k-1]<<endl;
    sort(v.begin(),v.end(),greater<int>());
    cout<<k<<"th largest element"<<v[k-1];
    return 0;
}