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
    string t;
    cin >> n >> t;
    ll ans = 0;
    int l = 0, r = 0;
    for (; l < n && r < n; l++)
    {
        if (t[r] == '1')
        {
            while (r < n - 1)
            {
                
                r++;
            }
            ans += ((r - l + 1) + 1) * (r - l + 1) / 2;
        }
        else if(r < n - 1 && t[r] == t[r + 1] && t[r] == '0')
        {

        }
    }
    cout << ans << endl;
}