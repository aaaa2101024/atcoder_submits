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
    map<ll, ll> ma_1;
    map<ll, ll> ma_2;
    pll MA1 = {0, 0}, MA2 = {0, 0};
    cin >> n;

    rep(i, n)
    {
        ll f, s;
        cin >> f >> s;
        if (ma_1.count(f))
        {
            if (ma_1[f] > s)
            {
                ma_2[f] = ma_1[f];
                ma_1[f] = s;
            }
            else if (!ma_2.count(f))
            {
                ma_2[f] = s;
            }
        }
        else
        {
            ma_1[f] = s;
        }
        if (MA1.first < s && MA1.second != f)
        {
            if (MA2.second != f)
                MA2.first = MA1.first;
            else
                
            MA1.first = s;
        }
        else if (MA2.first < s)
        {
            MA2.first = s;
        }
    }
    ll ans = MA1.first + MA2.first;
    for (auto x : ma_1)
    {
        if (ma_2.count(x.first))
            ans = max(ans, (x.second + ma_2[x.first]) / 2);
    }
    cout << ans << endl;
}