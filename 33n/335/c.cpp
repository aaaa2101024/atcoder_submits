#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> xy(n + 1);
    xy[0] = {0, 0};
    int count = n;
    for (int i = n; i >= 0; i--)
    {
        xy[n - i].first = i + 1;
        xy[n - i].second = 0;
    }
    for (int i = 0; i < q; i++)
    {
        char c;
        int x;
        cin >> x;
        pair<int, int> in;
        int y;
        switch (x)
        {
        case 1:
            cin >> c;
            int change;
            switch (c)
            {
            case 'R':
                change = 1 + xy[count].first;
                in = {change, xy[count].second};
                xy.push_back(in);
                count++;
                break;

            case 'L':
                change = xy[count].first - 1;
                in = {change, xy[count].second};
                xy.push_back(in);
                count++;
                break;

            case 'U':
                change = 1 + xy[count].second;
                in = {xy[count].first, change};
                xy.push_back(in);
                count++;
                break;

            case 'D':
                change = xy[count].second - 1;
                in = {xy[count].first, change};
                xy.push_back(in);
                count++;
                break;
            }
            break;
        case 2:
            cin >> y;
            cout << xy[count - y + 1].first << ' ' << xy[count - y + 1].second << endl;
            break;
        }
    }
}