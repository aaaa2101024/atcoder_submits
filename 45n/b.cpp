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
    cin >> n;
    vector<vector<ll>> C(n ,vector<ll>(n ,INFLL));
    for(int i = 0;i < n;i++)
    {
        vector<ll> x(0);
        for(int j = 0;j < n - 1 - i;j++)
        {
            ll y;
            cin >> y;
            x.emplace_back(y);
        }
        for(int j = i + 1, k = 0;j < n;j++,k++)
        {
            C[i][j] = x[k];
        }
    }
    for(int a = 0;a < n - 2;a++)
    {
        for(int b = a + 1; b < n - 1;b++)
        {
            for(int c = b + 1;c < n;c++)
            {
                if(C[a][c] > C[a][b] + C[b][c])
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}