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
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n)
    {
        cin >> a[i];
    }
    sort(all(a));
    ll ans = 0;
    for(ll left = 0,right = 0;left < n && right < n;left++)
    {
        while(right < n && a[right] - a[left] < m)
        {
            right++;
        }
        ans = max(ans,right - left);
    }
    cout << ans << endl;
}