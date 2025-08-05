#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
using vl = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < n; i++)
constexpr ll INFLL = (1ll << 62);
constexpr int INF = (1 << 30);
#define Yes(x)                 \
    if (x)                     \
        cout << "Yes" << endl; \
    else                       \
        cout << "No" << endl;

void dfs(vector<vector<int>> &G, vector<bool> &ch, int &path)
{
    if (!G[path].empty())
    {
        int n = G[path].size();
        rep(i, n)
        {
            if (ch[G[path][i]] == false)
            {
                ch[G[path][i]] = true;
                path = G[path][i];
                dfs(G, ch, path);
            }
        }
    }
    return;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n, vector<int>(0));
    rep(i, m)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        G[x].emplace_back(y);
        G[y].emplace_back(x);
    }
    if (n != m)
    {
        cout << "No" << endl;
        return 0;
    }
    vector<bool> ch(n, false);
    int path = 0;
    dfs(G, ch, path);
    rep(i, n)
    {
        if (ch[i] == false)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}