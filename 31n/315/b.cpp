#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
using vl = vector<long>;
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
    int m;
    cin >> m;
    vl d(m);
    ll sum = 0;
    rep(i,m)
    {
        cin >> d[i];
        sum += d[i];
    }
    sum /= 2;
    sum++;
    ll test = 0;
    rep(i,m)
    {
        for(int j = 0;j < d[i];j++)
        {
            test++;
            if(test == sum)
            {
                cout << i + 1 << " " << j + 1 << endl;
            }
        }

    }
}