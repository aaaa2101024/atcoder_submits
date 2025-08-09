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
    int n;
    cin >> n;
    vl a(n);
    rep(i,n)
    {
        cin >> a[i];
    }
    set<int> ch;
    rep(i,n)
    {
        ch.insert(a[i]);
    }
    rep(i,2001)
    {
        if(!ch.count(i))
        {
            cout << i << endl;
            return 0;
        }
    }

}