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
    string s;
    cin >> s;
    map<char, int> cnt;
    int n = s.size();
    rep(i, n)
    {
        if (cnt.count(s[i]))
        {
            cnt[s[i]]++;
        }
        else
        {
            cnt[s[i]] = 1;
        }
    }
    for (auto x : cnt)
    {
        if (x.second == 1)
        {
            cout << x.first << endl;
            return 0;
        }
    }
}