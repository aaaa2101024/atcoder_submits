#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> G(n,vector<int>(n));
    for(int i = 0;i < n - 1;i++)
    {
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        G[u][v] = 1;
        G[v][u] = 1;
    }
}