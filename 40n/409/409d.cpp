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
    ll t;
    cin >> t;
    rep(_, t)
    {
        ll n;
        string s;
        cin >> n >> s;
        bool f = true;
        rep(left, n - 1)
        {
            if (s[left] > s[left + 1])
            {
                f = false;
                int right = left;
                for(;right < n - 1;right++)
                {
                    if(s[right + 1] > s[left])
                    {
                        break;
                    }
                }
                rep(j,n)
                {
                    if(j != left)
                    {
                        cout << s[j];
                    }
                    else
                    {
                        ll prelef = left;
                        for(int k = left + 1;left < right && k < n;j++,k++,left++)
                        {
                            cout << s[k];
                        }
                        cout << s[prelef];
                    }
                }
                cout << endl;
                break;
            }
        }
        if(f)
        {
            cout << s << endl;
        }
    }
}