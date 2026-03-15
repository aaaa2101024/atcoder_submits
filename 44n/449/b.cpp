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
    int h, w, q;
    cin >> h >> w >> q;
    rep(_, q)
    {
        int s, x;
        cin >> s >> x;
        if(s == 1)
        {
            cout << x * w << endl;
            h -= x;
        }
        else
        {
            cout << x * h << endl;
            w -= x;
        }
    }
}