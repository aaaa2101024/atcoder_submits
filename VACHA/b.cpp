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
    string s;
    cin >> s;
    bool falg = true;
    int n = s.size();
    rep(i,n)
    {
        if(i % 2 == 0)
        {
            if(s[i] == 'L')
            {
                falg = false;
            }
        }
        else
        {
            if(s[i] == 'R')
            {
                falg = false;
            }
        }
    }
    Yes(falg);
}