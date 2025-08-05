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
    int n,d;
    cin >> n >> d;
    vector<bool> ans(n,false);
    vector<set<int>> path(n);
    vector<pll> xy(n);
    rep(i,n)
    {
        cin >> xy[i].first >> xy[i].second;
    }
    rep(i,n)
    {
        rep(j,n)
        {
            int xx = xy[i].first - xy[j].first;
            int yy = xy[i].second - xy[j].second;
            if(xx * xx + yy * yy <= d * d)
            {
                path[i].insert(j);
            }
        }
    }
    queue<int> test;
    test.push(0);
    while(!test.empty())
    {
        int num = test.front();
        test.pop();
        set<int> temp = path[num];
        for(auto i:temp)
        {
            if(ans[i] == false)
            {
                ans[i] = true;
                test.push(i);
            }
        }
    }
    rep(i,n)
    {
        Yes(ans[i]);
    }
}