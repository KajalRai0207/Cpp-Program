#include<iostream>
using namespace std;
int main()
{
    int ar[]={10,20,40};
    cout<<*ar<<endl;

    int *ptr=ar;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
}