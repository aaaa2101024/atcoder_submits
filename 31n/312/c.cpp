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
    int n,m;
    cin >> n >> m;
    vl a(n),b(m);
    rep(i,n)
    {
        cin >> a[i];
    }
    rep(i,m)
    {
        cin >> b[i];
    }
    ll left = 0,right = INFLL;
    while (right - left > 1)
    {
        ll sell = 0,buy = 0;
        ll mid = (left + right) / 2;
        rep(i,n)
        {
            if(a[i] <= mid)
            {
                sell++;
            }
        }
        rep(i,m)
        {
            if(mid <= b[i])
            {
                buy++;
            }
        }
        if(sell < buy)
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    cout << right << endl;
}