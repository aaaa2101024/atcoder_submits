#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<char>> m(h, vector<char>(w, '.'));
    pair<int, int> loc = {h * 100, w * 100};
    int dir = 4000;
    /*
    0>U
    1>R
    2>D
    3>L
    */
    for (int i = 0; i < n; i++)
    {
        if (m[loc.first % h][loc.second % w] == '.')
        {
            dir++;
            m[loc.first % h][loc.second % w] = '#';
        }
        else if (m[loc.first % h][loc.second % w] == '#')
        {
            dir--;
            m[loc.first % h][loc.second % w] = '.';
        }
        switch (dir % 4)
        {
        case 0:
            loc.first--;
            break;
        case 1:
            loc.second++;
            break;
        case 2:
            loc.first++;
            break;
        case 3:
            loc.second--;
            break;
        }
    }
    for(int i = 0;i < h;i++)
    {
        for(int j = 0;j < w;j++)
        {
            cout << m[i][j];
        }
        cout << endl;
    }
}