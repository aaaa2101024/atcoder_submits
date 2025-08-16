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
    vl r(n), c(n);
    ll ans = 0;
    rep(i, n)
    {
        cin >> r[i] >> c[i];
    }
    sort(all(r));
    sort(all(c));
    if (r[n - 1] - r[0] != 0)
    {
        ans = max(ans, (r[n - 1] - r[0]) / 2 + (r[n - 1] - r[0]) % 2);
    }
    if (r[n - 1] - r[0] != 0)
    {
        ans = max(ans, (c[n - 1] - c[0]) / 2 + (c[n - 1] - c[0]) % 2);
    }
    cout << ans << endl;
}