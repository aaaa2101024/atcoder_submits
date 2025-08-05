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
    vector<pair<pll,ll>> ab(m);
    rep(i,m)
    {
        cin >> ab[i].first.first >> ab[i].first.second;
        ab[i].second = ab[i].first.second - ab[i].first.first;
    }
    sort(all(ab));
    vl Max(m,0);
    ll ans = 0;
    ll ch_Max = INFLL * -1;
    ll check = 0;
    rep(i,m)
    {
        if(ch_Max < ab[i].second)
        {
            ch_Max = ab[i].second;
            check = i;
        }
        Max[i] = check;
    }
    while(n - ab[0].first.first >= 0)
    {
        ll l = 0;
        ll r = m - 1;
        while(r - l > 1)
        {
            ll mid = (l + r) / 2;
            if(ab[mid].first.first < n)
            {
                l = mid ;
            }
            else
            {
                r = mid ;
            }
        }
        ans++;
        n += ab[Max[r]].second;
    }
    cout << ans << endl;
}