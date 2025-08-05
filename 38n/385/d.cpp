#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, m;
    pair<long, long> loc;
    cin >> n >> m;
    cin >> loc.first >> loc.second;
    map<long, vector<long>> X, Y;
    for (long i = 0; i < n; i++)
    {
        long x, y;
        cin >> x >> y;
        X[x].emplace_back(y);
        Y[y].emplace_back(x);
    }
    set<pair<long, long>> ans;
    for (long i = 0; i < m; i++)
    {
        char c;
        long d;
        cin >> c >> d;
        switch (c)
        {
        case 'U':
            for (auto q : X[loc.first])
            {
                if (loc.second <= q && q <= loc.second + d)
                {
                    ans.insert({loc.first, q});
                }
            }
                    loc.second += d;
            break;
        case 'D':
            for (auto q : X[loc.first])
            {
                if (loc.second - d <= q && q <= loc.second)
                {
                    ans.insert({loc.first, q});
                }
            }
                    loc.second -= d;
            break;
        case 'R':
            for (auto q : Y[loc.second])
            {
                if (loc.first <= q && q <= loc.first + d)
                {
                    ans.insert({q, loc.second});
                }
            }
                    loc.first += d;
            break;
        case 'L':
            for (auto q : Y[loc.second])
            {
                if (loc.first - d <= q && q <= loc.first)
                {
                    ans.insert({q, loc.second});
                }
            }
            loc.first -= d;
            break;
        }
    }
    cout << loc.first << ' ' << loc.second << ' ' << ans.size() << endl;
}