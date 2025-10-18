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
    ll n, k;
    string s;
    cin >> n >> k >> s;
    map<string, ll> cnt;
    for (int i = 0; i < n - k + 1; i++)
    {
        string temp = s.substr(i, k);
        if (cnt.count(temp))
        {
            cnt[temp]++;
        }
        else
        {
            cnt[temp] = 1;
        }
    }
    ll Max = 0;
    for (auto x : cnt)
    {
        Max = max(Max, x.second);
    }
    cout << Max << endl;
    for (auto x : cnt)
    {
        if (Max == x.second)
        {
            cout << x.first << ' ';
        }
    }
    cout << endl;
}