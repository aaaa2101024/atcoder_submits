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
    string t;
    cin >> t;
    int m = t.size();
    vector<string> s(n);
    vector<int> ans(0);
    rep(i,n)
    {
        cin >> s[i];
    }
    rep(i,n)
    {
        int l = s[i].size();
        if(s[i] == t)
        {
           ans.emplace_back(i + 1);
        }
        else if(l == m)
        {
            int ch = 0;
            rep(j,l)
            {
                if(s[i][j] != t[j])
                {
                    ch++;
                }
            }
            if(ch < 2)
            {
               ans.emplace_back(i + 1);
            }
        }
        else if(m + 1 == l)
        {
            int ch = 0;
            for(int j = 0,k = 0;j < m && k < l;j++,k++)
            {
                if(t[j] != s[i][k])
                {
                    ch++;
                    j--;
                }
            }
            if(ch < 2)
            {
               ans.emplace_back(i + 1);
            }
        }
        else if(m - 1 == l)
        {
            int ch = 0;
            for(int j = 0,k = 0;j < m && k < l;j++,k++)
            {
                if(t[j] != s[i][k])
                {
                    ch++;
                    k--;
                }
            }
            if(ch < 2)
            {
               ans.emplace_back(i + 1);
            }
        }
    }
    int si = ans.size();
    cout << si << endl;
    rep(i,si)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}