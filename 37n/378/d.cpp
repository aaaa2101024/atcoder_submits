#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> mo = {
    {1, 0},
    {0, 1},
    {-1, 0},
    {0, -1}};

int count = 0;

void dfs(vector<vector<bool>> &seen, long &ans, int i, int j, int k, int h, int w, int count)
{
    seen[i][j] = true;
    if (count == k)
    {
        ans++;
        return;
    }
    for (int _ = 0; _ < 4; _++)
    {
        int ii = mo[_].first + i;
        int jj = mo[_].second + j;

        if (ii < 0 || jj < 0 || ii >= h || jj >= w)
            continue;

        if (seen[ii][jj])
            continue;

        dfs(seen, ans, ii, jj, k, h, w, count + 1);
        seen[ii][jj] = false;
    }
    seen[i][j] = false;
}

int main()
{
    int h, w, k;
    cin >> h >> w >> k;
    vector<vector<char>> c(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> c[i][j];
        }
    }
    long ans = 0;
    vector<vector<bool>> seen(h, vector<bool>(w, false));
    for (int j = 0; j < h; j++)
    {
        for (int _ = 0; _ < w; _++)
        {
            if (c[j][_] == '#')
            {
                seen[j][_] = true;
            }
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int count = 0;
            if (!seen[i][j])
                dfs(seen, ans, i, j, k, h, w, count);
        }
    }
    cout << ans << endl;
}