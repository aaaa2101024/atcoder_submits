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
    ll n, l, r;
    cin >> n >> l >> r;
    string s;
    cin >> s;
    map<char, vector<ll>> sum;
    ll ans = 0;
    for (ll i = 0; i < 26; i++)
    {
        sum[char('a' + i)] = vector<ll>(n + 1, 0);
    }
    rep(i, n)
    {
        sum[s[i]][i + 1] = 1;
        for (ll j = 0; j < 26; j++)
        {
            sum[char('a' + j)][i + 1] += sum[char('a' + j)][i];
        }
    }
    for (ll i = 0; i < n - l; i++)
    {
        char x = s[i];
        ans += sum[x][min(n, i + r + 1)] - sum[x][i + l];
    }
    cout << ans << endl;
}