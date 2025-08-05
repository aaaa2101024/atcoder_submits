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
    int q;
    cin >> n >> q;
    map<int, int> hato;
    map<int, int> ans;
    rep(i,n)
    {
        ans[i + 1] = 1;
    }
    set<int> out;
    rep(i, q)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int p, h;
            cin >> p >> h;
            int xx = -1;
            if(hato.count(p))
            {
                xx = hato[p];
                ans[xx]--;
                if(out.count(xx) && ans[xx] < 2)
                {
                    out.erase(xx);
                }
            }
            else
            {
                ans[p]--;
                if(ans.count(p) && ans[p] < 2)
                {
                    out.erase(p);
                }
            }
            hato[p] = h;
            ans[h]++;
            if(ans[h] > 1)
            {
                out.insert(h);
            }
            
        }
        else
        {
            cout << out.size() << endl;
        }
    }
}