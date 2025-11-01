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
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    vl bs(0);
    ll ok = 0;
    ll sum = n * (n - 1) / 2;
    rep(i, n)
    {
        if (s[i] == 'b')
        {
            bs.emplace_back(i);
        }
    }
    int m = bs.size();
    // bが制約以上あるところを加算
    for (int i = 0; i < m - b; i++)
    {
        int l = bs[i];
        int r = bs[i + b];
        l++;
        r++;
        if (r - l >= a)
        {
            ok += l * (n - r);
        }
        else
        {
            int nnn = a - r + l;
            if(r)
            ok += (l - n) * r;
            ok -= n * (n + 1) / 2;
            ok -= n * (n + 1) * (2 * n + 1) / 6;
        }
    }
    // そもそもa以下を加算
    for (int i = 0; i < a; i++)
    {
        ok += n - i;
    }
    cout << sum - ok << endl;
}