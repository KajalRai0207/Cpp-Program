#include<bits/stdc++.h>
using namespace std;

int hardestWorker(vector<vector<int>>logs){
    int maxi=logs[0].back();
    int id=logs[0].front();
    for(int i=0;i<logs.size()-1;i++){
        cout<<"maxi="<<maxi<<endl;
        int key=logs[i+1].back()-logs[i].back();
        if(key==maxi){
            if(logs[i+1].front()<id){
                id=logs[i+1].front();
                cout<<"id"<<id<<endl;
            }
        }
        if(key>maxi){
            maxi=key;
            id=logs[i+1].front();
            
        }

    }
    return id;
}

int main()
{
    vector<vector<int>>logs{{0,3},{2,5},{4,8}};
    cout<<hardestWorker(logs);
    return 0;
}