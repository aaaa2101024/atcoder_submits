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
    int m;
    cin >> m;
    vector<ll> b(n),w(m);
    rep(i,n)
    {
        cin >> b[i];
    }
    rep(i,m)
    {
        cin >> w[i];
    }
    sort(all(b),greater<>());
    sort(all(w),greater<>());
    ll ans = 0;
    int count_b = 0;
    rep(i,n)
    {
        if(b[i] >= 0)
        {
            ans += b[i];
            count_b++;
        }
    }
    int count_w = 0;
    rep(i,m)
    {
        if(count_w < count_b)
        {
            if(w[i] > 0)
            {
                ans += w[i];
                count_w++;
            }
        }
        else
        {
            if(count_b >= n)
            {
                break;
            }
            if(w[i] + b[count_b] > 0)
            {
                ans += w[i];
                ans += b[count_b];
                count_b++;
                count_w++;
            }
        }
    }
    cout << ans << endl;

}