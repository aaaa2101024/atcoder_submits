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
    ll n;
    cin >> n;
    ll ans = 0;
    ll left = 0, right = INF;
    while (right - left > 1)
    {
        ll mid = (left + right) / 2;
        if (2 * mid * mid > n)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    ans += left;
    left = 0;
    right = INF;
    while (right - left > 1)
    {
        ll mid = (left + right) / 2;

        if (4 * mid * mid > n)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    ans += left;
    cout << ans << endl;
}