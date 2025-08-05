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
    int q;
    cin >> q;
    stack<int> ans;
    rep(i,100)
    {
        ans.push(0);
    }
    rep(i,q)
    {
        int a;
        cin >> a;
        if(a == 1)
        {
            int x;
            cin >> x;
            ans.push(x);
        }
        else
        {
            int out = ans.top();
            ans.pop();
            cout << out << endl;
        }
    }
}