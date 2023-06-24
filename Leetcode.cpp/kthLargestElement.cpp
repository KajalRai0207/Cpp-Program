#include<iostream>
#include<vector>
using namespace std;

int kthLargest(vector<vector<int>> &matrix,int k)
{
    
}
int main()
{
    int num,k;
    cout<<"Enter kth value"<<endl;
    cin>>k;
    vector<vector<int>> vec;
    for(int i=0;i<3;i++)
    {
        vector<int>v;
        for(int j=0;j<3;j++)
        {
            cin>>num;
            v.push_back(num);
        }
        vec.push_back(v);
    }
    cout<<kthLargest(vec,k);
}