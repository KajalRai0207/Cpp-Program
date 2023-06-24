#include <iostream>
#include <algorithm>
#include <iterator>
#define n 100;
using namespace std;
class Stack
{
    string* arr;
    int top;
    public:
    Stack()
    {
        arr=new string[n];
        top=-1;
    }
    void push(string s)
    {
        if(top==n-1)
        {
            return;
        }
        for(int i=0;i<s.length();i++)
        {
            top++;
            arr[top]=s[i];
        }
    }
    void display()
    {
        while(top!=-1)
        {
            cout<<arr[top]<<" ";
            top--;
        }
    }
    string check(string s)
    {
        if(s.length()%2!=0)
        {
            cout<<"hello";
            return "No";
        }
        int j=s.length()-1;
        for(int i=0;i<(s.length()/2);i++)
        {
            if(arr[i]=="{" && arr[j]=="}" || arr[i]=="(" && arr[j]==")" || arr[i]=="[" && arr[j]=="]" )
            {
                j--;
                continue;
            }
            else{
                return "NO";
            }
        }
        return "YES";
    }
    
};
int main()
{
   Stack st;
   int m;
   cin>>m;
   for(int i=0;i<m;i++)
   {
        string s;
        cin>>s;
        st.push(s);
        cout<<st.check(s);
   }
  
}