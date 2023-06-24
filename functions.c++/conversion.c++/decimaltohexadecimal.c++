#include<iostream>
using namespace std;
void decimaltohexadecimal(int n)
{
    int hexadecimal[1000];
    int i=0;
    while(n>0)
    {
        hexadecimal[i]=n%16;
        n=n/16;
        i++;

    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<hexadecimal[j];
    }
}
int main()
{
    int n;
    cin>>n;
    decimaltohexadecimal(n);
    return 0;
}