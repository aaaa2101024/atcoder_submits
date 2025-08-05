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
    int n = s.size();
    vector<bool> ch(n,false);
    rep(i,n)
    {
        if(s[i] == '.')
        {
            ch[i] = true;
        }
    }
    int a = 0,b = 0;
    rep(i,n)
    {
        int cnt = 0;
        int j = i;
        for(;j < n;j++)
        {
            if(cnt == 0 && s[j] == '#')
            {
                cnt++;
                a = j + 1;
            }
            else if(cnt == 1 && s[j] == '#')
            {
                b = j + 1;
                break;
            }
        }
        cout << a << ',' << b << endl;
        i = j;
    }
}