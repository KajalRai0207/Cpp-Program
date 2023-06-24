#include<bits/stdc++.h>
using namespace std ;
#define MAX 1000
bool hashTable[MAX+1][2];
bool search(int find){
    if(find>=0){
        if(hashTable[find][0]){
            return true;
        }else{
            return false;
        }
    }
    else{
        if(hashTable[abs(find)][1]){
            return true;
        }else{
            return false;
        }
    }
}
void insert(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            hashTable[arr[i]][0]=arr[i];
        }
        else{
            hashTable[abs(arr[i])][1]=arr[i];
        }
    }
}
int main(){
    int arr[]={1,7,4,-9,6,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    insert(arr,n);
    int find=-2;
    if(search(find)){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }

}