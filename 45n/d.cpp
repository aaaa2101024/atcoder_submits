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
    ll n , k;
    cin >> n >> k;
    vl a(n);
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
        a[i] %= k;
    }
    sort(a.begin(), a.end());
    cout << min(a[n - 1] - a[0], a[0] - a[n - 1] + k) << endl;
}