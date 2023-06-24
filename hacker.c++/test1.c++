#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    string temp;
    getline(cin, temp);
    int n= stoi(temp);
    map<string,string>var;
    for(int i=1;i<=n;i++)
    {
        string str;
        getline(cin,str);
        string num;
        getline(cin,num);
        var.insert(std::pair<string,string>(str,num));
    }
    string s;
    while( getline(cin,s))
    {
             
        if(s.empty()==false)
        {
            std::map<string,string>::iterator itr;
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