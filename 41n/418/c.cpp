#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
using vl = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (ll i = 0; i < n; i++)
constexpr ll INFLL = (1ll << 62);
constexpr ll INF = (1 << 30);
#define Yes(x)                 \
    if (x)                     \
        cout << "Yes" << endl; \
    else                       \
        cout << "No" << endl;

int main()
{
    ll n, q;
    cin >> n >> q;
    ll Ma = 0;
    vl a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        Ma = max(Ma, a[i]);
    }
    sort(all(a));
    vl sum(n + 1);
    sum[0] = 0;
    for (ll i = 1; i < n + 1; i++)
    {
        sum[i] = sum[i - 1] + a[i - 1];
    }
    for (ll _ = 0; _ < q; _++)
    {
        ll b;
        cin >> b;
        if (b > Ma)
        {
            cout << -1 << endl;
            continue;
        }
        ll ans = lower_bound(all(a), b) - a.begin();
        // if (ans + 1 == n)
        cout << sum[ans] + (n - ans) * (b - 1) + 1 << endl;
        // else
        //     cout << sum[ans] + (n - ans) * (b - 1) + 1 << endl;
    }
}