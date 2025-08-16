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
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> aaaa;
    rep(_, q)
    {
        int que;
        cin >> que;
        if (que == 1)
        {
            int x;
            cin >> x;
            aaaa.push(x);
        }
        else
        {
            cout << aaaa.top() << endl;
            aaaa.pop();
        }
    }
}