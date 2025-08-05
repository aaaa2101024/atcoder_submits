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
    ll n,m,k;
    cin >> n >> m >> k;
    ll left = 0,right = INFLL;
    ll mi = max(n,m) / __gcd(n,m) * min(n,m);
    while (right - left > 1)
    {
        ll mid = (left + right) / 2;
        ll count = mid / n + mid / m - (mid / mi) * 2;
        if(count >= k)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    cout << right << endl;
}