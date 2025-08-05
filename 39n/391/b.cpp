#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long,long>;
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
    int n,m;
    cin >> n >> m;
    vector<string> s(n),t(m);
    rep(i,n)
    {
        cin >> s[i];
    }
    rep(i,m)
    {
        cin >> t[i];
    }
    pll ans;
    rep(i,n - m + 1)
    {
        rep(j,n - m + 1)
        {
            bool flag = false;
            rep(x,m)
            {
                rep(y,m)
                {
                    if(s[i + x][j + y] != t[x][y])
                    {
                        flag = true;
                    }
                }
            }
            if(flag)
            {
                continue;
            }
            else
            {
                ans.first = i + 1;
                ans.second = j + 1;
            }
        }
    }
    cout << ans.first << ' ' << ans.second << endl;
}