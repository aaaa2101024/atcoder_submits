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
    string s;
    cin >> s;
    int ans = 0;
    int n = s.size();
    bool x = false;
    rep(i, n)
    {
        if (x == false && s[i] == 'o')
        {
            ans++;
        }
        else if (x == true && s[i] == 'i')
        {
            ans++;
        }
        else
        {
            x ^= 1;
        }
    }
    if (s[n - 1] == 'i')
    {
        ans++;
    }
    cout << ans << endl;
}