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
    ll h,w,n;
    cin >> h >> w >> n;
    map<ll,set<ll>> X,Y;
    rep(i,n)
    {
        ll x,y;
        cin >> x >> y;
        X[x].insert(y);
        Y[y].insert(x);
    }
    int q;
    cin >> q;
    rep(i,q)
    {
        int q1,q2;
        cin >> q1 >> q2;
        if(q1 == 1)
        {
            cout << X[q2].size() << endl;
            for(auto y:X[q2])
            {
                Y[y].erase(q2);
            }
            X[q2].clear();
        }
        else
        {
            cout << Y[q2].size() << endl;
            for(auto x:Y[q2])
            {
                X[x].erase(q2);
            }
            Y[q2].clear();
        }
    }

}