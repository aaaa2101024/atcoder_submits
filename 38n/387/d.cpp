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
    vector<vector<int>> check_ver(h, vector<int>(w, -1));
    vector<vector<int>> check_hor(h, vector<int>(w, -1));
    queue<pair<int, int>> que;
    pair<int, int> st, go;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == 'S')
            {
                st = make_pair(i, j);
            }
            else if (s[i][j] == 'G')
            {
                go = {i, j};
            }
        }
    }
    check_ver[st.first][st.second] = 0;
    check_hor[st.first][st.second] = 0;
    vector<pair<int, int>> dx = {{1, 0}, {-1, 0}};
    vector<pair<int, int>> dy = {{0, 1}, {0, -1}};
    for (int i = 0; i < 2; i++)
    {
        int xx = dx[i].first + st.first;
        int yy = dx[i].second + st.second;
        if (xx < 0 || h <= xx || yy < 0 || w <= yy)
        {
            continue;
        }
        else if(s[xx][yy] != '#')
        {
            que.push({xx, yy});
            check_ver[xx][yy] = 1;
        }
    }
    int count = 0;
    while (!(que.empty()))
    {
        queue<pair<int, int>> temp = que;
        queue<pair<int, int>> temp2;
        while (!(temp.empty()))
        {
            if (count % 2 == 0)
            {
                pair<int, int> loc = temp.front();
                temp.pop();
                for (int i = 0; i < 2; i++)
                {
                    int xx = dy[i].first + loc.first;
                    int yy = dy[i].second + loc.second;
                    if (xx < 0 || h <= xx || yy < 0 || w <= yy)
                    {
                        continue;
                    }
                    else if (check_ver[xx][yy] == -1 && s[xx][yy] != '#')
                    {
                        check_ver[xx][yy] = count + 2;
                        temp2.push({xx, yy});
                    }
                }
            }
            else
            {
                pair<int, int> loc = temp.front();
                temp.pop();
                for (int i = 0; i < 2; i++)
                {
                    int xx = dx[i].first + loc.first;
                    int yy = dx[i].second + loc.second;
                    if (xx < 0 || h <= xx || yy < 0 || w <= yy)
                    {
                        continue;
                    }
                    else if (check_ver[xx][yy] == -1 && s[xx][yy] != '#')
                    {
                        check_ver[xx][yy] = count + 2;
                        temp2.push({xx, yy});
                    }
                }
            }
        }
        que = temp2;
        count++;
    }

    for (int i = 0; i < 2; i++)
    {
        int xx = dy[i].first + st.first;
        int yy = dy[i].second + st.second;
        if (xx < 0 || h <= xx || yy < 0 || w <= yy)
        {
            continue;
        }
        else if(s[xx][yy] != '#')
        {
            que.push({xx, yy});
            check_hor[xx][yy] = 1;
        }
    }
    count = 0;
    while (!(que.empty()))
    {
        queue<pair<int, int>> temp = que;
        queue<pair<int, int>> temp2;
        while (!(temp.empty()))
        {
            if (count % 2 == 0)
            {
                pair<int, int> loc = temp.front();
                temp.pop();
                for (int i = 0; i < 2; i++)
                {
                    int xx = dx[i].first + loc.first;
                    int yy = dx[i].second + loc.second;
                    if (xx < 0 || h <= xx || yy < 0 || w <= yy)
                    {
                        continue;
                    }
                    else if (check_hor[xx][yy] == -1 && s[xx][yy] != '#')
                    {
                        check_hor[xx][yy] = count + 2;
                        temp2.push({xx, yy});
                    }
                }
            }
            else
            {
                pair<int, int> loc = temp.front();
                temp.pop();
                for (int i = 0; i < 2; i++)
                {
                    int xx = dy[i].first + loc.first;
                    int yy = dy[i].second + loc.second;
                    if (xx < 0 || h <= xx || yy < 0 || w <= yy)
                    {
                        continue;
                    }
                    else if (check_hor[xx][yy] == -1 && s[xx][yy] != '#')
                    {
                        check_hor[xx][yy] = count + 2;
                        temp2.push({xx, yy});
                    }
                }
            }
        }
        que = temp2;
        count++;
    }
    if(min(check_hor[go.first][go.second],check_ver[go.first][go.second]) == -1)
    {
        if(check_hor[go.first][go.second] != -1)
        {
            cout << check_hor[go.first][go.second] << endl;
        }
        else if(check_ver[go.first][go.second])
        {
            cout << check_ver[go.first][go.second] << endl;
        }
        else 
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << min(check_hor[go.first][go.second],check_ver[go.first][go.second]) << endl;
    }
}