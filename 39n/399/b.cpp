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
    int n;
    cin >> n;
    vector<pll> p(n);
    rep(i,n)
    {
        cin >> p[i].first;
        p[i].second = i;
    }
    sort(all(p),greater<>());
    vector<int> ans(n,0);
    int r = 1;
    int count = 1;
    for(int i = 0;i < n - 1;i++)
    {
        ans[p[i].second] = r;
        if(p[i].first == p[i+1].first)
        {
            count++;
        }
        else
        {
            r += count;
            count = 1;
        }
    }
    ans[p[n - 1].second] = r;
    rep(i,n)
    {
        cout << ans[i] << endl;
    }
}