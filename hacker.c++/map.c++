#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>var;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string str;
        cin>>str;
        int num;
        cin>>num;
        var.insert(pair<string,int>(str,num));
    }
    
    while(true)
    {
        string s;
        cin>>s;
        cout<<"s="<<s.length()<<endl;
    
        if(s.length()!=0)
        {
            std::map<string,int>::iterator itr;
            itr = var.find(s);
            if(itr!=var.end())
            {
                cout<<itr->first<<"="<<itr->second<<endl;
            }
            else
            {
                cout<<"not found"<<endl;
            }
        }
        else{
            break;
        }
    }
    
    return 0;
}
       