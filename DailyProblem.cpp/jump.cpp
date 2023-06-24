#include<bits/stdc++.h>
using namespace std;

int minJumps(vector<int>arr, int n){
        // Your code here
        int c=0;
        int first=arr[0];
        for(int i=0;i<n;i+=first){
            cout<<"i="<<i<<endl;
            if(i>n-1){
                c++;
                return c;
            }
            else{
                c++;
                first=arr[i];
            }
        }
        return c;
    }

int main()
{
    vector<int>nums{1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} ;
    int n=11;
    cout<<minJumps(nums,n);
    return 0;
}