#include<iostream>
#include<climits>
using namespace std;
const int  n =10;
class Stack
{
    int* arr;
    int top;
    public:
    Stack()
    {
        arr=new int[n];
        top=-1;
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=x;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"No element present"<<endl;
            return;
        }
        top--;
    }
    int Max()
    {
        int m=INT_MIN;
        for(int i=0;arr[i]!=NULL;i++)
        {
            m=max(m,arr[i]);
            cout<<m<<endl;
        }
        return m;

    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"No element present"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top==-1;
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(9);
    st.push(2);
    st.push(7);
    st.push(3);
    cout<<"Top element = "<<st.Top()<<endl;
    st.pop();
    cout<<st.Max()<<endl;
   
    return 0;
}