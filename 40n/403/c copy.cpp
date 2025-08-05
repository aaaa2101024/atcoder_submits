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
    int n,m,q;
    cin >> n >> m >> q;
    set<ll> allOk;
    map<int,set<ll>> check;
    rep(i,q)
    {
        int md;
        cin >> md;
        if(md == 1)
        {
            int x,y;
            cin >> x >> y;
            check[x].insert(y);
        }
        else if(md == 2)
        {
            int x;
            cin >> x;
            allOk.insert(x);
        }
        else
        {
            int x,y;
            cin >> x >> y;
            if(allOk.count(x))
            {
                cout << "Yes" << endl;
            }
            else if(check[x].count(y))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}