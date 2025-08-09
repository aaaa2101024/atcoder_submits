#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &G,vector<bool> &check,int &loc)
{
    check[loc] = true;
    for(int i = 0;i < int(G[loc].size());i++)
    {
        if(check[G[loc][i]] == false)
        {
            dfs(G,check,G[loc][i]);
        }
    }
}


int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> G(n,vector<int>(0));
    for(int i = 0;i < m;i++)
    {
        int a,b;
        cin >> a >> b;
        G[a - 1].emplace_back(b - 1);
        G[b - 1].emplace_back(a - 1);
    }
    vector<bool> check(n,false);
    int ans = 0;
    for(int i = 0;i < n;i++)
    {
        if(check[i] == false)
        {
            ans++;
            dfs(G,check,i);
        }
    }
    cout << ans - 1<< endl;
}