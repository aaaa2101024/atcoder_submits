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
    ll n, l;
    cin >> n >> l;
    map<ll, ll> ch;
    ll pre = 0;
    for (ll i = 0; i < l; i++)
    {
        ch[i] = 0;
    }
    ch[pre] = 1;
    rep(i, n - 1)
    {
        ll d;
        cin >> d;
        pre += d;
        pre %= l;
        ch[pre]++;
    }
    ll ans = 0;
    if(l % 3 != 0)
    {
        cout << ans << endl;
        return 0;
    }
    ll pos = l / 3;
    for(ll i = 0;i < pos;i++)
    {
        ans += ch[i] * ch[i + pos] * ch[i + pos * 2];
    }
    cout << ans << endl;
}