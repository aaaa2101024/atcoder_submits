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
    string x, y;
    cin >> x >> y;
    int a, b;
    if (x == "Ocelot")
    {
        a = 1;
    }
    else if (x == "Serval")
    {
        a = 2;
    }
    else
    {
        a = 3;
    }
    if (y == "Ocelot")
    {
        b = 1;
    }
    else if (y == "Serval")
    {
        b = 2;
    }
    else
    {
        b = 3;
    }
    Yes(a >= b);
}