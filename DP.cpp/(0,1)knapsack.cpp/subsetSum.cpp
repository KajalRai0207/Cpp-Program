#include<bits/stdc++.h>
using namespace std;
bool issubsetSum(int arr[],int n,int sum)
{
    bool t[n+1][sum+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                t[i][j]==false;
            }
            if(j==0){
                t[i][j]==true;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum+1;j++){
            if(j>=arr[i-1]){
                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            if(j<arr[i-1]){
                t[i][j]=t[i-1][j];
            }
        }
    }
   
    return t[n][sum];
}
int main()
{
    int arr[]={3,4,5,2};
    int sum=6;
    int n=sizeof(arr)/sizeof(arr[0]);
    if(issubsetSum(arr,n,sum)==true){
        cout<<"Subset exists";
    }
    else{
        cout<<"Doesn't exists";
    }
    return 0;
}