#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<string>s;
    string s1="Hello";
    s.insert("a");
    s.insert("b");
    s.insert("Hello");
    s.insert("world");
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<endl;
    }
    cout<<"The size of given string="<<s.size();
    if(s.find(s1)!=s.end()){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    if(s.count(s1)){
        s.erase(s1);
        cout<<"The size of given string="<<s.size();
    }
    s.clear();
    cout<<"The size of given string="<<s.size();

}