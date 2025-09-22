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


void dfs(vector<bool> &G_check, vector<set<ll>> &G, ll &loc)
{
    for (auto point : G[loc])
    {
        if (G_check[point] == false)
        {
            G_check[point] = true;
            dfs(G_check, G, point);
        }
    }
    return;
}

int main()
{
    ll n;
    cin >> n;
    vector<set<ll>> G(n);
    vector<bool> G_check(n, false);
    set<ll> ini;
    ll ans = 0;
    rep(i, n)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            ini.insert(i);
        }
        else
        {
            a--;
            b--;
            G[a].insert(i);
            // G[i].insert(a);
            G[b].insert(i);
            // G[i].insert(b);
        }
    }
    for (auto x : ini)
    {
        if (G_check[x] == false)
        {
            G_check[x] = true;
            dfs(G_check, G, x);
        }
    }
    rep(i, n)
    {
        if (G_check[i])
            ans++;
    }
    cout << ans << endl;
}