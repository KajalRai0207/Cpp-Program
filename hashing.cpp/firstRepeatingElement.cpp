#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int nonRepeating(int arr[],int n){
    unordered_map<int,int>s;
    for(int i=0;i<n;i++){
        int key=arr[i];
        s[key]++;
    }
    for(int i=0;i<n;i++){
        auto key=s.find(arr[i]);
        if(key->second > 1){
            return i+1;//gives position of first repeating element
        }
    }
    return -1;
}
int main(){
    int arr[]={1,5,3,4,3,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<nonRepeating(arr,n);
}