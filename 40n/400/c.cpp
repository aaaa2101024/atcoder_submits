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

dfs(int h,int w,vector<string> &s,vector<vector<bool>> &kick,)



int main()
{
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    vector<vector<bool>> kick(h,vector<bool>(w,false));
    rep(i,h)
    {
        cin >> s[i];
    }
    pll locf,locg;
    cin >> locf.first >> locf.second >> locg.first >> locg.second;
    vector<vector<int>> ans(h,vector<int>(w,-1));


    cout << ans[locg.first][locg.second] << endl;
}