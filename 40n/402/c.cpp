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
    int n,m;
    cin >> n >> m;
    vector<set<int>> a(m);
    int ans = 0;
    map<int,vl> check;
    rep(i,m)
    {
        int k;
        cin >> k;
        rep(j,k)
        {
            int aa;
            cin >> aa;
            a[i].insert(aa);
            check[aa].emplace_back(i);
        }
    }
    rep(i,n)
    {
        int b;
        cin >> b;
        vl temp = check[b];
        int nn = temp.size();
        rep(j,nn)
        {
            a[temp[j]].erase(b);
            if(a[temp[j]].empty())
            {
                ans++;
            }
        }

        cout << ans << endl;
    }
}