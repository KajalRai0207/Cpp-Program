#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    for(auto i=s.rbegin();i!=s.rend();++i){
        cout<<*i<<" ";
    }
}
int main()
{
    vector<char>s;
    s={'h','e','l','l','o'};
    reverseString(s);
    return 0;
}