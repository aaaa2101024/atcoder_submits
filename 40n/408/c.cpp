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
    ll test = 1;
    if(LR[0].first != 1)
    {
        cout << 0 << endl;
        return 0;
    }
    for(int left = 0,right = 1;right < n && left < n;)
    {
        while(right < n && left < n && LR[right].first > LR[left].first)
        {
            right++;
            test++;
        }
        ans = min(ans,test);
        while(right < n && left < n && LR[right].first <= LR[left].first)
        {
            left++;
            test--;
        }
    }
    cout << ans << endl;
}