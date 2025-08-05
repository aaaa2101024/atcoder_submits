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
    vector<ll> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    ll ans = -1;
    rep(i, n)
    {
        ll cnt = 0;
        rep(j, n)
        {
            if (a[i] <= a[j])
            {
                cnt++;
            }
        }
        if (cnt >= a[i])
        {
            ans = max(ans, a[i]);
        }
    }
    if (ans != -1)
        cout << ans << endl;
    else
        cout << n << endl;
}