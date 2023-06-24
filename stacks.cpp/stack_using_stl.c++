#include<iostream>
#include<stack>
using namespace std;

void getMax(int n)
{
    stack<int>stack;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            int num;
            cin>>num;
            stack.push(num);
        }
        if(a==2)
        {
            if(!stack.empty())
            {
                stack.pop();
            }
        }
    }
    while(!stack.empty())
    {
        cout<<stack.top()<<endl;
        stack.pop();
    }
}

int main()
{
    int n;
    cin>>n;
    getMax(n);
    return 0;
}