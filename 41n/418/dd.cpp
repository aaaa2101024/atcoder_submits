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
    vl ran(0);
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        while (i < n - 1 && t[i] == t[i + 1])
        {
            cnt++;
            i++;
        }
        ran.emplace_back(cnt);
    }
    bool f = t[0] == 1;
        for (int i = 0; i < ran.size(); i++)
        {
            if (f)
            {
                f = false;
                ans += ran[i] * (ran[i] + 1) / 2;
            }
            else
            {
                f = true;
                
            }
        }
}