#include<iostream>
#include<vector>
using namespace std;
vector <int> reverseArray(vector<int>&v1){
    int temp;
    int s=v1.size();
    for(int i=0;i<s/2;i++){
        temp=v1[i];
        v1[i]=v1[s-i-1];
        v1[s-i-1]=temp;
    }
    return v1;
}

int main()
{
    vector<int>v1{1,2,3,4,5,6};
    reverseArray(v1);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }
    return 0;
}