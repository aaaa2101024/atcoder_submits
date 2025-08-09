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
    int hx, wx;
    cin >> hx >> wx;
    vector<string> x(hx);
    rep(i, hx)
    {
        cin >> x[i];
    }
    int ha, wa, hb, wb;
    cin >> ha >> wa;
    vector<string> a(ha);
    rep(i, ha)
    {
        cin >> a[i];
    }
    cin >> hb >> wb;
    vector<string> b(hb);
    rep(i, hb)
    {
        cin >> b[i];
    }
    bool ans = false;
    for (int i = -10; i < hx + 10; i++)
    {
        bool f = true;
        for (int j = -10; j < wx + 10; j++)
        {
            for (int ii = -10; ii < hx + 10; ii++)
            {
                for (int jj = -10; jj < wx + 10; jj++)
                { //
                    vector<vector<char>> ch(hx, vector<char>(wx, '.'));
                    for (int _ = 0; _ < ha; _++)
                    {
                        for (int __ = 0; __ < wa; __++)
                        {
                            if (0 <= _ + i && _ + i < hx && 0 <= __ + j && __ + j < wx)
                            {
                                if (a[_][__] == '#')
                                    ch[_ + i][__ + j] = a[_][__];
                            }
                        }
                    }
                    for (int _ = 0; _ < hb; _++)
                    {
                        for (int __ = 0; __ < wb; __++)
                        {
                            if (0 <= _ + ii && _ + ii < hx && 0 <= __ + jj && __ + jj < wx)
                            {
                                if (b[_][__] == '#')
                                    ch[_ + ii][__ + jj] = b[_][__];
                            }
                        }
                    }
                    for (int _ = 0; _ < hx; _++)
                    {
                        for (int __ = 0; __ < wx; __++)
                        {
                            if (ch[_][__] != x[_][__])
                            {
                                f = false;
                            }
                        }
                    }
                    if (f)
                    {
                        ans = true;
                    }
                }
            }
        }
    }
    Yes(ans);
}