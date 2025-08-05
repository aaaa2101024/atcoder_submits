#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    int ans = 0;
    vector<vector<bool>> check(h, vector<bool>(w, false));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == '#' && check[i][j] == false)
            {
                ans++;
                queue<pair<int, int>> que;
                que.emplace(i, j);
                check[i][j] = true;
                while (!que.empty())
                {
                    pair<int,int> loc = que.front();
                    que.pop();
                    for (int x = -1; x <= 1; x++)
                    {
                        for (int y = -1; y <= 1; y++)
                        {
                            int ii = x + loc.first;
                            int jj = y + loc.second;
                            if (ii < 0 || h <= ii || jj < 0 || w <= jj)
                            {
                                continue;
                            }
                            else
                            {
                                if (s[ii][jj] == '#' && check[ii][jj] == false)
                                {
                                    que.emplace(ii, jj);
                                    check[ii][jj] = true;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
}