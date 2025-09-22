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
    int n, m, k;
    cin >> n >> m >> k;
    vector<vl> aa(n, vl(0));
    vector<bool> ed(n, false);
    rep(i, k)
    {
        int a, b;
        cin >> a >> b;
        aa[a - 1].emplace_back(b);
        rep(j,n)
        {
            if(ed[j] == false && aa[j].size() == m)
            {
                cout << j + 1 << " ";
                ed[j] = true;
            }
        }
    }
    cout << endl;
}