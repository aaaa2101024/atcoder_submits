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
    queue<int> ans;
    rep(i,q)
    {
        int a;
        cin >> a;
        if(a == 1)
        {
            int z;
            cin >> z;
            ans.push(z);
        }
        else
        {
            int out = ans.front();
            ans.pop();
            cout << out << endl;
        }
    }
}