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
    vector<ll> a(n);
    ll left = 0,right = INFLL;
    rep(i,n)
    {
        cin >> a[i];
    }
    while(right - left > 1)
    {
        ll mid = (right + left) / 2;
        ll cnt = 0;
        rep(i,n)
        {
            if(mid <= a[i])
            {
                cnt++;
            }
        }
        if(cnt >= mid)
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    cout << left << endl;
}