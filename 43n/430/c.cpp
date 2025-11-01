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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int l = 0, r = 0;
    int suma = 0, sumb = 0;
    int ans = 0;
    for (; r < n;)
    {
        while (sumb != b && r < n)
        {
            if (s[r] == 'a')
                suma++;
            else
                sumb++;
            r++;
            if (suma >= a && sumb < b)
                ans++;
        }
        while (sumb == b && l < r)
        {
            if (s[l] == 'a')
                suma--;
            else
                sumb--;
            if (suma >= a && sumb < b - 1)
                ans++;
            l++;
        }
    }
    cout << ans << endl;
}