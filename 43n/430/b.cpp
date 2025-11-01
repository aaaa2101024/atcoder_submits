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
    vector<string> s(n);
    rep(i, n)
            cin >>
        s[i];
    set<vector<string>> ans;
    rep(i, n - m + 1)
    {
        rep(j, n - m + 1)
        {
            vector<string> temp(0);
            for (int l = 0; l < m; l++)
            {
                temp.emplace_back(s[i + l].substr(j, m));
            }
            ans.insert(temp);
        }
    }
    cout << ans.size() << endl;
}