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
    map<int, int> bak;
    pair<ll, ll> ans = {-1, -1};
    rep(i, m)
    {
        ll x;
        cin >> x;
        if (bak.count(x))
        {
            bak[x]++;
        }
        else
        {
            bak[x] = 1;
        }
        if (bak[x] > ans.first)
        {
            ans.first = bak[x];
            ans.second = x;
        }
        else if (bak[x] == ans.first && x < ans.second)
        {
            ans.second = x;
        }
        cout << ans.second << endl;
    }
}