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
        vl s(n);
        for(int j = 0;j < n;j++)
        {
            cin >> s[j];
        }
        ll cnt = 0;
        bool ans = true;
        ll a = s[0];
        ll b = s[n - 1];
        sort(all(s));
        while(true)
        {
            cnt++;
            bool f = false;
            ll l = 0;
            ll r = n - 1;
            ll MID = b / 2 + b % 2;
            while(r - l > 1)
            {
                ll mid = (l + r) / 2;
                if(MID < s[mid])
                {
                    r = mid;
                }
                else
                {
                    f = true;
                    break;
                }
            }
            if(f)
            {
                b = s[(l + r) / 2];
            }
            else
            {
                ans = false;
                break;
            }
            if(a >= b)
            {
                break;
            }
        }
        if(ans)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}