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
    long n;
    cin >> n;
    vl a(1000);
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < 1000; i++)
    {
        string s = to_string(a[i - 1]);
        ll sum = 0;
        rep(j, s.size())
        {
            sum += int(s[j] - '0');
        }
        a[i] = sum + a[i - 1];
    }
    cout << a[n] << endl;
}