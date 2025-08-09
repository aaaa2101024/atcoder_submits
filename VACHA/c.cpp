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
    vl a(n),b(n),c(n);
    rep(i,n)
    {
        cin >> a[i];
    }
    rep(i,n)
    {
        cin >> b[i];
    }
    rep(i,n)
    {
        cin >> c[i];
    }
    int aa = 0,bb = 0,cc = 0;
    sort(all(a));
    sort(all(b));
    sort(all(c));
    int ans = 0;
    for(aa = 0;aa < n && bb < n && cc <  n;)
    {
        if(a[aa] < b[bb] && b[bb] < c[cc])
        {
            ans++;
            aa++;
            bb++;
            cc++;
        }
        else if(b[bb] >= c[cc])
        {
            cc++;
        }
        else if(a[aa] >= b[bb])
        {
            bb++;
        }
    }
    cout << ans << endl;
}