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

void bfs(vector<string> &G, vector<vector<bool>> &test, int h, int w, int ii, int jj, bool &f)
{
    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, 1, 0, -1};
    queue<pair<int, int>> que;
    que.push(make_pair(ii, jj));
    while (!que.empty())
    {
        pair<int, int> loc = que.front();
        que.pop();
        for (int _ = 0; _ < 4; _++)
        {
            int i = loc.first + dx[_];
            int j = loc.second + dy[_];
            if (i == -1 || i == h || j == -1 || j == w)
            {
                continue;
            }
            else
            {
                if(i == 0 || i == h - 1|| j == 0 || j == w - 1)
                {
                    if(G[i][j] == '.')
                    {
                        f = true;
                    }
                }
                if (G[i][j] == '.' && test[i][j] == false)
                {
                    que.push(make_pair(i, j));
                }
            }
            test[i][j] = true;
        }
    }
}

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> G(h);
    for (int i = 0; i < h; i++)
    {
        cin >> G[i];
    }
    int ans = 0;
    vector<vector<bool>> test(h, vector<bool>(w, false));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (G[i][j] == '.' && test[i][j] == false && !(i == 0 || i == h - 1 || j == 0 || j == w - 1))
            {
                ans++;
                bool f = false;
                bfs(G, test, h, w, i, j, f);
                if(f)
                    ans--;
            }
            test[i][j] = true;
        }
    }
    cout << ans << endl;
}