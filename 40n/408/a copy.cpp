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
    int n;
    int s;
    cin >> n >> s;
    vl t(n + 1);
    t[0] = 0;
    bool flag = true;
    for(int i = 1;i < n + 1;i++)
    {
        cin >> t[i];
    }
    for(int i = 0;i < n;i++)
    {
        if(t[i + 1] - t[i] > s)
        {
            flag = false;
        }
    }
    Yes(flag);
}