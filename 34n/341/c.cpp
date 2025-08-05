#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<string> s(h);
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            pair<int, int> loc = {i, j};
            if (s[loc.first][loc.second] == '#')
            {
                continue;
            }
            else
            {
                for (int k = 0; k < int(t.size()); k++)
                {
                    switch (t[k])
                    {
                    case 'L':
                        loc.second--;
                        break;
                    case 'R':
                        loc.second++;
                        break;
                    case 'U':
                        loc.first--;
                        break;
                    case 'D':
                        loc.first++;
                        break;
                    }
                    if (s[loc.first][loc.second] == '#')
                    {
                        ans--;
                        break;
                    }
                }
                ans++;
            }
        }
    }
    cout << ans << endl;
}