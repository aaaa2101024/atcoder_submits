#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    int h, w, d;
    cin >> h >> w >> d;
    vector<string> s(h);
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    vector<pair<int, int>> dydx = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    vector<vector<bool>> check(h, vector<bool>(w, false));
    queue<pair<int, int>> que;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (check[i][j] == false && s[i][j] == 'H')
            {
                que.emplace(i, j);
                check[i][j] = true;
            }
        }
    }
    int count = 0;
    for (int k = 0; k < d; k++)
    {
        queue<pair<int, int>> temp;
        while (!que.empty())
        {
            pair<int, int> loc = que.front();
            que.pop();

            for (int iii = 0; iii < 4; iii++)
            {
                int ii = loc.first + dydx[iii].first;
                int jj = loc.second + dydx[iii].second;
                if (ii < 0 || h <= ii || jj < 0 || w <= jj)
                {
                    continue;
                }
                else
                {
                    if (s[ii][jj] != '#' && check[ii][jj] == false)
                    {
                        temp.emplace(ii, jj);
                        check[ii][jj] = true;
                    }
                }
            }
        }
        que = temp;
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (check[i][j])
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}