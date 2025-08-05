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

int keta(ll x)
{
    int ans = 0;
    while(x != 0)
    {
        ans++;
        x /= 10;
    }
    return ans;
}

int main()
{
    int n,k;
    cin >> n >> k;
    ll ans = 1;
    rep(i,n)
    {
        ll a;
        cin >> a;
        int x = keta(a);
        int y = keta(ans);
        if(x + y > k + 1)
        {
            ans = 1;
            continue;
        }
        ans *= a;
        if(keta(ans) > k)
        {
            ans = 1;
        }
    }
    cout << ans << endl;

}