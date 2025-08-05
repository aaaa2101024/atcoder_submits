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
    cin >>n;
    string ans = "";
    ll sum = 0;
    for(int i = 0;i < n;i++)
    {
        char c;
        ll l;
        cin >> c >> l;
        sum += l;
        if(sum > 100)
        {
            cout << "Too Long" << endl;
            return 0;
        }
        for(int j = 0;j < l;j++)
        {
            ans += c;
        }
    }
    cout << ans << endl;
}