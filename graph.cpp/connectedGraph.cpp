#include<bits/stdc++.h>
using namespace std;
 
int merge(int* parent, int x)
{
    if (parent[x] == x)
        return x;
    return merge(parent, parent[x]);
}
 
int connectedcomponents(int n, vector<vector<int> >& edges)
{
    int parent[n];
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
    for (auto x : edges) {
        parent[merge(parent, x[0])] = merge(parent, x[1]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (parent[i] == i);
    }
    for (int i = 0; i < n; i++) {
        parent[i] = merge(parent, parent[i]);
    }
    map<int, list<int> > m;
    for (int i = 0; i < n; i++) {
        m[parent[i]].push_back(i);
    }
    for (auto it = m.begin(); it != m.end(); it++) {
        list<int> l = it->second;
        for (auto x : l) {
            cout << x << " ";
        }
        cout << endl;
    }
    return ans;
}


int main()
{
    int n = 6;
    vector<int> e1 = { 1,2 };
    vector<int> e2 = { 1,4};
    vector<int> e3 = { 1,5};
    vector<int> e4 = { 2, 4};
    vector<int> e5 = { 3, 3 };
    vector<int> e6 = { 3,5 };
    vector<int> e7 = { 3, 6 };
    vector<vector<int> > e;
    e.push_back(e1);
    e.push_back(e2);
    e.push_back(e3);
    e.push_back(e4);
    e.push_back(e5);
    e.push_back(e6);
    e.push_back(e7);
 
    cout << "Following are connected components:\n";
    int a = connectedcomponents(n,e); 
    
    return 0;
}