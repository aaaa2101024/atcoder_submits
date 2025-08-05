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

bool dfs(int &n, string &s,ll &sum,vector<bool> &done,int &cnt)
{
    if (sum == 0)
    {
        return true;
    }
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        if (done[i] == false && s[sum - (1 << i) - 1] == '0')
        {
            int m = cnt;
            m--;
            ll x = sum;
            x -= (1 << i);
            x--;
            done[i] = true;
            bool f2 = dfs(n,s,x,done,m);
            done[i] = false;
            if(f2 == true)
            {
                f = true;
            }
        }
    }
    return f;
}

int x = 1 << 0;
int main()
{
    int t;
    cin >> t;
    vl ch(18);
    for (int i = 0; i < 18; i++)
    {
        ch[i] = (1l << (i + 1)) - 1l;
    }
    rep(_, t)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<bool> done(n,false);
        Yes(dfs(n, s, ch[n - 1],done,n));
    }
}