//call by value

#include<iostream>
using namespace std;
void increment(int a)
{
    a++;
    cout<<"increment="<<a<<endl;
}
int main()
{
    int a=2;
    increment(a);
    cout<<a<<endl;
    return 0;   
}