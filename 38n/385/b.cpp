#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    pair<int, int> loc;
    cin >> h >> w >> loc.first >> loc.second;
    vector<string> s(h);
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    string t;
    cin >> t;
    int n = t.size();
    int count = 0;
    vector<vector<bool>> check(h, vector<bool>(w, false));
    check[loc.first - 1][loc.second - 1] = true;
    for (int i = 0; i < n; i++)
    {
        switch (t[i])
        {
        case 'L':
            if (s[loc.first - 1][loc.second - 2] != '#')
            {
                loc.second--;
                check[loc.first - 1][loc.second - 1] = true;
            }
            break;
        case 'R':
            if (s[loc.first - 1][loc.second] != '#')
            {
                loc.second++;
                check[loc.first - 1][loc.second - 1] = true;
            }
            break;
        case 'U':
            if (s[loc.first - 1 - 1][loc.second - 1] != '#')
            {
                loc.first--;
                check[loc.first - 1][loc.second - 1] = true;
            }
            break;
        case 'D':
            if (s[loc.first + 1 - 1][loc.second - 1] != '#')
            {
                loc.first++;
                check[loc.first - 1][loc.second - 1] = true;
            }
            break;

        }
    }
    for(int i = 0;i < h;i++)
    {
        for(int j = 0;j < w;j++)
        {
            if(check[i][j] && s[i][j] == '@')
            {
                count++;
            }
        }
    }
    cout << loc.first << ' ' << loc.second << ' ' << count << endl;
    
}