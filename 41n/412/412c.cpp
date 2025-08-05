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
    int t;
    cin >> t;
    for(int i = 0;i < t;i++)
    {
        int n;
        cin >> n;
        set<ll> s;
        ll a = 0;
        ll b = 0;
        for(int j = 0;j < n;j++)
        {
            ll x;
            cin >>x;
            s.insert(x);
            if(j == 0)
            {
                a = x;
            }
            if(j == n - 1)
            {
                b = x;
            }
        }
        ll cnt = 0;
        bool ans = true;
        if(a * 2>= b)
        {
            cout << 2 << endl;
            continue;
        }
        while(true)
        {
            cnt++;
            ll MID = b / 2 + b % 2;
            auto it = s.lower_bound(MID);
            if(it != s.end() && *it >= MID && *it != b)
            {
                b = *it;
            }
            else
            {
                ans = false;
                break;
            }
            if(b <= a)
            {
                break;
            }
        }
        if(ans)
        {
            cout << cnt + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}