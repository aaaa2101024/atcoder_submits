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
    string s = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    cout << "3.";
    int n;
    cin >> n;
    rep(i,n)
    {
        cout << s[i];
    }
    cout << endl;

}