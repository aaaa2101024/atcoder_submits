#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < n; i++)
constexpr ll INFLL = (1ll << 62);
constexpr int INF = (1 << 30);
#define Yes(x)                 \
    if (x)                     \
        cout << "Yes" << endl; \
    else                       \
        cout << "No" << endl;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<pll>> G(n,vector<pll>(n,{0,0}));
    rep(i,m)
    {
        ll u,v,w;
        cin >> u >> v >> w;
        u--;
        v--;
        G[u][v] = make_pair(1,w);
        G[v][u] = make_pair(1,w);
    }
    ll ans = INFLL;
    vector<int> check(n);
    rep(i,n)
    {
        check[i] = i;
    }
    do
    {
        ll mi = 0;
        rep(i,n - 1) 
        {   
            if(G[check[i]][check[i + 1]].first == 1)
            {
                mi ^= G[check[i]][check[i + 1]].second;
                if(check[i + 1] == n - 1)
                {
                    ans = min(ans,mi);
                    break;
                }
            }
            else
            {
                break;
            }
        }
    } while (next_permutation(check.begin() + 1,check.end()));
    
    cout << ans << endl;
}