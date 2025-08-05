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
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    set<char> ch;
    for (int i = 0; i < n -1; i++)
    {
        if (isupper(s[i + 1]))
        {
            ch.insert(s[i]);
        }
    }
    bool ans = true;
    for(auto x:ch)
    {
        bool f = true;
        for(int j = 0; j < m; j++)
        {
            if(x == t[j])
            {
                f = false;
                break;
            }
        }
        if(f)
        {
            ans = false;
            break;
        }
    }
    Yes(ans);
}