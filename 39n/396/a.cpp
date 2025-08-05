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
    vector<int> a(n);
    rep(i,n)
    {
        cin >> a[i];
    }
    bool flag = false;
    rep(i,n - 2)
    {
        if(a[i] == a[i + 1] && a[i + 1] == a[i + 2])
        {
            flag = true;
        }
    }
    Yes(flag);
}