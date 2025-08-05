#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (ll i = 0; i < n; i++)
constexpr ll INFLL = (1ll << 62);
constexpr ll INF = (1 << 30);
#define Yes(x)                 \
    if (x)                     \
        cout << "Yes" << endl; \
    else                       \
        cout << "No" << endl;

ll mod(ll value, ll n)
{
    if (value == 0)
    {
        return value;
    }
    if (value < 0)
    {
        value += n * (abs(value) / n + 1);
    }
    if (value == 0)
    {
        return value;
    }
    value %= n;
    return value;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    if (n < k)
    {
        cout << 1 << endl;
        return 0;
    }
    vector<ll> ans(n + 1, 0);
    ll sum = 0;
    for (ll i = 0; i < k && i <= n; i++)
    {
        ans[i] = 1;
    }
    ans[k] = k;
    sum += k + k;
    ll sum_left = ans[0];
    for (ll i = k + 1, j = 1; i <= n && j <= n; i++, j++)
    {
        ans[i] = sum - sum_left;
        sum += ans[i];
        sum_left += ans[j];
        sum = mod(sum, 1000000000);
        sum_left = mod(sum_left, 1000000000);
        ans[i] = mod(ans[i], 1000000000);
    }
    cout << ans[n] % 1000000000 << endl;
}