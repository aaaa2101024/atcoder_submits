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
    int n,m;
    cin >>n >> m;
    vector<pll> LR(m);
    rep(i,m)
    {
        cin >> LR[i].first >> LR[i].second;
    }
    ll ans = INFLL;
    sort(all(LR));
    int left = 0,right = 0;
    int lim = LR[left].second;
    for(int i = 1;i <= n;i++)
    {
        ll temp = 0;
        while(right < m && LR[right].first <= i && i <= LR[right].second)
        {
            temp++;
            right++;
        }
        ans = min(temp,ans);
        
    }
    cout << ans << endl;
}