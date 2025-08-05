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

string base_10_to_n(long k,ll n)
{
    string ans = "";
    for(ll i = 0;k != 0;i++)
    {
        ans += char((k%n) + '0');
        k /= n;
    }
    reverse(all(ans));
    return ans;
}




int main()
{
    ll a,n;
    cin >> a >> n;
    string s = base_10_to_n(n,a);
    ll ans = 0;
    ll m = s.size();
    for(ll i = 1;i <= m - 1;i++)
    {
        ll ch = 1;
        for(ll j = 0;j < i / 2 + i % 2;j++)
        {
            ch *= a;
        }
        ans += ch;
    }
    char Min = min(s[0],s[s.size() - 1]);
    ll ch = char(Min - '0');
    for(ll i = 0;i < (m - 1) / 2 + (m - 1) % 2;i++)
    {
        ch *= a;
    }
    ans += ch;
    cout << ans << endl;
}
