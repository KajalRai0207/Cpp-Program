// Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. 
// Once all operations have been performed, return the maximum value in the array. 
#include<iostream>
using namespace std;
int *arraymanipulation(int n,int queries[][])
{

}
int main()
{
    int n,m;
    cin>>n>>m;
    int *queries=new int[m*3];
    for(int i=0;i<m;i++)
    {
        cin>>queries[i*0];
        cin>>queries[i*1];
        cin>>queries[i*2];
    }
    int *max;
    max= arraymanipulation(n,queries);
    cout<<max;
}