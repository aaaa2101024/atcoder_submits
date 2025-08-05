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

void dfs(int n,vector<ll> &cnt,vector<vl> &a,vl &c,set<int> &ch,ll ans,int node)
{
    if(node == n)
    {
        return;
    }
    cnt[node]++;
    set<int> ch1;
    set<int> ch2;
    ll test = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < cnt[j];j++)
        {
            int k = a[i].size();
            test += c[i];
            for(int _ = 0;_ < k;_++)
            {
                if(ch1.count(a[j][_]))
                {
                    ch2.insert(a[j][_]);
                }
                else
                {
                    ch1.insert(a[j][_]);
                }
            }
        }
    }
    if(ch2 == ch)
    {
        ans = min(ans,test);
    }
    for(int i = 0;i < 2;i++)
    {
        dfs(n,cnt,a,c,ch,ans,node + 1);
        cnt[node]++;
    }
}

int main()
{
    ll ans = INFLL;
    int n,m;
    cin >> n >> m;
    vl c(n);
    rep(i,n)
    {
        cin >> c[i];
    }
    vector<vl> a(m,vl(0));
    rep(i,m)
    {
        int k;
        cin >> k;
        rep(j,k)
        {
            int x;
            cin >> x;
            a[i].emplace_back(x);
        }
    }
    set<int> ch;
    rep(i,n)
    {
        ch.insert(i +1);
    }
    vector<ll> cnt(n,0);
    dfs(n,cnt,a,c,ch,ans,0);
    cout << ans << endl;
}