#include <bits/stdc++.h>
using namespace std;

int h, w, d;
void dfs(vector<vector<pair<bool, int>>> &vec, int count, int i, int j, vector<string> &s)
{
    vec[i][j].first = true;
    vec[i][j].second = max(d - count,vec[i][j].second);
    if (count == d)
    {
        return;
    }
    else
    {
        vector<pair<int, int>> x = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        for (int k = 0; k < 4; k++)
        {
            int ii = i + x[k].first;
            int jj = j + x[k].second;
            if (ii < 0 || ii >= h || jj < 0 || jj >= w)
            {
                continue;
            }
            else if (s[ii][jj] != '#')
            {
                if (vec[ii][jj].second < d - count)
                {
                    dfs(vec, count + 1, ii, jj, s);
                }
            }
        }
    }
}

int main()
{
    cin >> h >> w >> d;
    vector<string> s(h);
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    int ans = 0;
    vector<vector<pair<bool, int>>> vec(h, vector<pair<bool, int>>(w, {false, 0}));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == 'H')
            {
                vec[i][j] = {true,d};
                dfs(vec, 0, i, j, s);
            }
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (vec[i][j].first)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}