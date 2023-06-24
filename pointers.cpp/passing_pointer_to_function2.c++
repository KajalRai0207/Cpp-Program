//call by reference


#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    cout<<"*a="<<*a<<endl;
    cout<<"a="<<a<<endl;

    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=2;
    int b=4;

    int *abtr=&a;
    int *bptr=&b;

    swap(abtr,bptr);//swap(&a,&b)
    cout<<a<<" "<<b<<endl;
}