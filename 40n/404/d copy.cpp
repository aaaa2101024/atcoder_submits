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
    vector<ll> c(n);
    ll ans = INFLL;
    vector<long> half((1 << n),0);
    set<pll> chh;
    rep(i,n)
    {
        cin >> c[i];
    }
    map<int,set<int>> zoo;
    rep(i,m)
    {
        int k;
        cin >> k;
        rep(j,k)
        {
            int a;
            cin >> a;
            a--;
            zoo[a].insert(i);
        }
    }
    for(int i = 0;i < (1 << n);i++)
    {
        for(int j = 0;j < (1 << n);j++)
        {
            ll test = 0;
            set<int> ch1,ch2;
            for(int k = 0;k < n;k++)
            {
                if(i & (1 << k))
                {
                    test += c[k];
                    for(auto x:zoo[k])
                    {
                        if(ch1.count(x))
                        {
                            ch2.insert(x);
                        }
                        else
                        {
                            ch1.insert(x);
                        }
                    }
                }
                if(j & (1 << k))
                {
                    test += c[k];
                    for(auto x:zoo[k])
                    {
                        if(ch1.count(x))
                        {
                            ch2.insert(x);
                        }
                        else
                        {
                            ch1.insert(x);
                        }
                    }
                }
            }
            if(ch2.size() == m)
            {
                ans = min(ans,test);
            }
        }
    }
    cout << ans << endl;
}