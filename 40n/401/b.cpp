#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
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
    ll n;
    cin >> n;
    ll ans = 0;
    bool flag = false;
    rep(i,n)
    {
        string s;
        cin >> s;
        if(s == "login")
        {
            flag = true;
        }
        else if(s == "logout")
        {
            flag = false;
        }
        else if(s == "private" && flag == false)
        {
            ans++;
        }
    }
    cout << ans << endl;
}