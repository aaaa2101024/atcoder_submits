#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
using vl = vector<long>;
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
    int n, m;
    cin >> n >> m;
    vl ch(n);
    rep(i, n)
    {
        ch[i] = i;
    }
    vector<vector<pll>> G(n, vector<pll>(n, {0, 0}));
    rep(i, m)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        G[a][b].first = 1;
        G[a][b].second = c;
        G[b][a].first = 1;
        G[b][a].second = c;
    }
    ll ans = 0;
    do
    {
        ll test = 0;
        bool flag = true;
        rep(i, n - 1)
        {
            if (G[ch[i]][ch[i + 1]].first == 1)
            {
                test += G[ch[i]][ch[i + 1]].second;
            }
            else
            {
                flag = false;
                ans = max(ans,test);
                break;
            }
        }
        if (flag)
        {
            ans = max(ans, test);
        }
    } while (next_permutation(all(ch)));
    cout << ans << endl;
}