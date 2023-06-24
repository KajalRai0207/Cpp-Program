#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>umap;
    umap.insert(make_pair("kajal",21));
    umap.insert(make_pair("atul",32));
    umap.insert(make_pair("anjali",19));
    for(auto itr=umap.begin();itr!=umap.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    int arr[]={1,4,5,5,8,4,9,7,2,1};
    unordered_map<int,int>count;
     
    for(int i=0;i<10;i++){
        int key=arr[i];
        count[key]++;
    }

    for(auto it=count.begin();it!=count.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}