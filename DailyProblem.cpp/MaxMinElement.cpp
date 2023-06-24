#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v{1,2,3,4,7,9};
    cout<<"The maximum element in array"<<*max_element(v.begin(),v.end());
    cout<<"The maximum element in array"<<*min_element(v.begin(),v.end());
    return 0;
}