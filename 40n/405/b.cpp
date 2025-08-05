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
    vl a(n);
    rep(i,n)
    {
        cin >> a[i];
    }
    set<ll> ch;
    for(int i = 1;i <= m;i++)
    {
        ch.insert(i);
    }
    reverse(all(a));
    int ans = 0;
    while(1)
    {
        set<ll> test;
        for(int i = ans;i < n;i++)
        {
            test.insert(a[i]);
        }
        if(test == ch)
        {
            ans++;
        }
        else
        {
            cout << ans << endl;
            return 0;
        }
    }
}