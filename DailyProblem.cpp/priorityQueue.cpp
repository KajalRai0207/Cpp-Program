#include<bits/stdc++.h>
using namespace std;

//Sort 0,1,2
  
void showpq(priority_queue<int,vector<int>,greater<int>> gq)
{
    priority_queue<int,vector<int>,greater<int>> g = gq;
    while (!g.empty()) {
        cout<< g.top()<<endl;
        g.pop();
    }
    cout << '\n';
}
  

int main()
{
    priority_queue<int,vector<int>,greater<int>>p;
    p.push(2);
    p.push(1);
    p.push(0);
    p.push(2);
    p.push(1);
    p.push(0);
    p.push(1);
    p.push(0);
    p.push(2);
    p.push(1);
    showpq(p);
    return 0;
}