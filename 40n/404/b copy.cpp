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

int main()
{
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    vector<int> cnt = {0,3,2,1};
    rep(i, n)
    {
        cin >> s[i];
    }
    rep(i, n)
    {
        cin >> t[i];
    }
    int ans = INF;
    int c = 0;
    rep(_, 4)
    {
        int ch = 0;
        rep(i, n)
        {
            rep(j, n)
            {
                if(s[i][j] != t[i][j])
                {
                    ch++;
                }
            }
        }
        ans = min(ans,ch + cnt[c]);
        vector<string> ne = s;
        rep(i,n)
        {
            rep(j,n)
            {
                ne[n - i - 1][j] = s[j][i];
            }
        }
        c++;
        s = ne;
    }
    cout << ans << endl;
}