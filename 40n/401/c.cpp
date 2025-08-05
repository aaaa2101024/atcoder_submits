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

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1, 0);
    ll i = 0;
    if(n < k)
    {
        cout << 1 << endl;
        return 0;
    }
    for (i = 0; i < k; i++)
    {
        a[i] = 1;
    }
    vector<ll> sum(n + 1, 0);
    sum[0] = a[0];
    for (int i = 1; i < k + 1; i++)
    {
        sum[i] += a[i - 1] + sum[i - 1];
    }
    a[k] = k;
    ll j = i - k;
    for (i = k + 1; i < n + 1; i++, j++)
    {
        a[i] += sum[i - 1];
        a[i] -= a[j];
        sum[i] += a[i];
    }
    cout << a[n] % 1000000000 << endl;
}