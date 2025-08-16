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
    int n, m;
    cin >> n >> m;
    string s;
    string t;
    cin >> s >> t;
    vl imosu(n + 1, 0);
    rep(_, m)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        imosu[l]++;
        imosu[r]--;
    }
    for (int i = 1; i < n; i++)
    {
        imosu[i] += imosu[i - 1];
    }
    rep(i, n)
    {
        if (imosu[i] % 2 == 1)
        {
            cout << t[i];
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
}