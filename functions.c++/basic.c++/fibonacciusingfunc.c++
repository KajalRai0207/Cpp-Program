#include<iostream>
using namespace std;
void fibb(int num)
{
    int a=0,b=1,c;
    for(int i=1;i<=num;i++)
    {
        c=a+b;
        cout<<a<<" ";
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    cin>>n;
    fibb(n);

}