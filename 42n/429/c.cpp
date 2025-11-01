#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
using vl = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (ll i = 0; i < n; i++)
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
    vl a(n, 0);
    vl f(n, n + 1);
    vl l(n, -1);
    rep(i, n)
    {
        int x;
        cin >> x;
        a[x - 1]++;
        f[x - 1] = min(f[x - 1], i);
        l[x - 1] = max(l[x - 1], i);
    }
    long ans = 0;
    rep(i, n)
    {
        if (a[i] >= 2)
        {
            ans += (l[a[i]] - f[a[i]] - a[i] + 2);
        }
    }
    cout << ans << endl;
}