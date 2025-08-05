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
    ll n;
    cin >> n;
    ll t;
    cin >> t;
    map<ll,ll> ab,ans;
    ans[0] = n;
    rep(i,n)
    {
        ab[i + 1] = 0;
    }
    rep(i,t)
    {
        ll a,b;
        cin >> a >> b;
        ll now = ab[a];
        ans[now]--;
        if(ans[now] == 0)
        {
            ans.erase(now);
        }
        ab[a] += b;
        if(ans.count(ab[a]))
        {
            ans[ab[a]]++;
        }
        else
        {
            ans[ab[a]] = 1;
        }
        cout << ans.size() << endl;
    }
}