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
    cin >> n;
    vector<bool> check(n,false);
    vector<int> path(0);
    vector<int> ans(0);
    map<int,int> G;
    rep(i,n)
    {
        int x;
        cin >> x;
        G[i + 1] = x;
    }
    int x = 1;
    while(check[x - 1] == false)
    {
        check[x - 1] = true;
        path.emplace_back(x);
        x = G[x];
    }
    reverse(all(path));
    for(int i = 0;;i++)
    {
        ans.emplace_back(path[i]);
        if(x == path[i])
        {
            break;
        }
    }
    int ans_size = ans.size();
    cout << ans_size << endl;
    for (int i = ans_size - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
    
    cout << endl;
}