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
const vector<pll> dydx = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const vector<char> dydx_char = {'^', 'v', '<', '>'};

bool ran(int h, int w, int i, int j)
{
    if (0 <= i && i < h && 0 <= j && j < w)
    {
        return true;
    }
    return false;
}

void bac(vector<string> &s, vector<vector<char>> &ans, vector<vector<int>> &test, int h, int w, int ii, int jj, int path, int n)
{
    if (path == -1)
    {
        return;
    }
    rep(_, n)
    {
        int iii = ii + dydx[_].first;
        int jjj = jj + dydx[_].second;
        if (ran(h, w, iii, jjj))
        {
            if (test[iii][jjj] == path - 1)
            {
                ans[iii][jjj] = dydx_char[_];
                bac(s, ans, test, h, w, iii, jjj, path - 1, n);
                return;
            }
        }
    }
}

void bfs(vector<string> &s, vector<vector<char>> &ans, vector<vector<int>> &test, int h, int w, int i, int j)
{
    int path = 0;
    test[i][j] = path;
    path++;
    int n = dydx.size();
    queue<pll> que;
    rep(_, n)
    {
        int ii = i + dydx[_].first;
        int jj = j + dydx[_].second;
        if (ran(h, w, ii, jj) && test[ii][jj] == -10)
        {
            if (s[ii][jj] == 'E')
            {
                bac(s, ans, test, h, w, ii, jj, path, n);
                return;
            }
            else if (ans[ii][jj] != '#')
            {
                test[ii][jj] = path;
                que.push({ii, jj});
            }
        }
    }
    while (!que.empty())
    {
        path++;
        queue<pll> temp_que = que;
        while (!temp_que.empty())
        {
            pll loc = temp_que.front();
            que.pop();
            temp_que.pop();
            rep(_, n)
            {
                int ii = loc.first + dydx[_].first;
                int jj = loc.second + dydx[_].second;
                if (ran(h, w, ii, jj) && test[ii][jj] == -10)
                {
                    if (s[ii][jj] == 'E')
                    {
                        bac(s, ans, test, h, w, ii, jj, path, n);
                        return;
                    }
                    else if (s[ii][jj] != '#')
                    {
                        test[ii][jj] = path;
                        que.push({ii, jj});
                    }
                }
            }
        }
    }
}

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h)
    {
        cin >> s[i];
    }
    vector<vector<char>> ans(h, vector<char>(w, '.'));
    rep(i,h)
    {
        rep(j,w)
        {
            if(s[i][j] == 'E' || s[i][j] == '#')
            {
                ans[i][j] = s[i][j];
            }
        }
    }
    rep(i, h)
    {
        rep(j, w)
        {
            if (s[i][j] == '#' || s[i][j] == 'E' || ans[i][j] == '<' || ans[i][j] == '>' || ans[i][j] == '^' || ans[i][j] == 'v')
            {
                continue;
            }
            else if (ans[i][j] == '.')
            {
                vector<vector<int>> test(h, vector<int>(w, -10));
                test[i][j] = 0;
                bfs(s, ans, test, h, w, i, j);
            }
        }
    }
    rep(i, h)
    {
        rep(j, w)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
}