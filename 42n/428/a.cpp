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
    int s,a,b,x;
    cin >> s >> a >> b >> x;
    int ans = 0;
    while(x > 0)
    {
        if(x - a >= 0)
        {
            ans += a * s;
            x -= a;
            x -= b;
        }
        else
        {
            ans += s * x;
            x = 0;
        }
    }
    cout << ans << endl;
}