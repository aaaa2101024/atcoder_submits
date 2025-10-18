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
    ll q;
    cin >> q;
    vl test(0);
    int minus = -1;
    rep(_, q)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            char c;
            cin >> c;
            if (test.empty())
            {
                if (c == '(')
                {
                    test.emplace_back(1);
                }
                else
                {
                    test.emplace_back(-1);
                    minus = 0;
                }
            }
            else
            {
                if (c == '(')
                {
                    test.emplace_back(test[test.size() - 1] + 1);
                }
                else
                {
                    test.emplace_back(test[test.size() - 1] - 1);
                    if(test[test.size() - 1] < 0 && minus == -1)
                    {
                        minus = test.size() - 1;
                    }
                }
            }
        }
        else
        {
            if(minus == test.size() - 1)
            {
                minus = -1;
            }
            test.pop_back();
        }
        Yes(test.empty()  || (test[test.size() - 1] == 0 && minus == -1));
    }
}