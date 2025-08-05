#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
using vl = vector<ll>;
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
    ll n, d;
    cin >> n >> d;
    ll ma = 0;
    map<ll, ll> cnt;
    vl shak(0);
    rep(i, n)
    {
        ll a;
        cin >> a;
        if (cnt.count(a))
        {
            cnt[a]++;
        }
        else
        {
            shak.emplace_back(a);
            cnt[a] = 1;
            ma = max(ma, a);
        }
    }
    set<ll> bat;
    sort(all(shak));
    ll m = shak.size();
    for (ll left = 0, right = 0; left < m && right < m; left++)
    {
        while (right < m)
        {
            if (abs(shak[left] - shak[right]) - d == 0)
            {
                bat.insert(shak[left]);
                bat.insert(shak[right]);
                break;
            }
            else if (shak[right] - shak[left] - d > 0)
            {
                break;
            }
            right++;
        }
    }
    ll ans = 0;
    if(d == 0)
    {
        for(auto x:cnt)
        {
            ans += x.second - 1;
        }
        cout << ans << endl;
        return 0;
    }
    vector<pll> DP(ma + 1,{0,0});
    for (ll i = 1; i <= ma; i++)
    {
        if (bat.count(i))
        {
            DP[i].first += cnt[i];
            DP[i + d].first = cnt[i + d];
            DP[i + d].second = cnt[i];
            ll j = 2;
            bat.erase(i);
            bat.erase(i + d);
            for(;cnt.count(i + j * d);j++)
            {
                DP[i + j * d].first = min(DP[i + (j - 1) * d].first,DP[i + (j - 1) * d].second);
                DP[i + j * d].first += cnt[i + j * d];
                DP[i + j * d].second = DP[i + (j - 1) * d].first;
                bat.erase(i + d * j);
            }
            j--;
            ans += min(DP[i + j * d].first,DP[i + j * d].second);
        }
    }
    cout << ans << endl;
}