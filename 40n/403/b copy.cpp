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
    string s,t;
    cin >> s >> t;
    bool flag = false;
    int n = s.size();
    int m = t.size();
    rep(i,n - m + 1)
    {
        bool flag2 = true;
        for(int j = i,cnt = 0;cnt < m && j < n;cnt++,j++)
        {
            if(s[j] == '?')
            {
                continue;
            }
            else if(s[j] != t[cnt])
            {
                flag2 = false;
            }
        }
        if(flag2)
        {
            flag = true;
        }
    }
    Yes(flag);
}