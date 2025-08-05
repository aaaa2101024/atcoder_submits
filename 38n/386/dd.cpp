#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, m;
    cin >> n >> m;
    set<pair<long, long>> gyou_white;
    set<pair<long, long>> gyou_black;
    set<pair<long, long>> retu_white;
    set<pair<long, long>> retu_black;
    bool flag = true;
    for (int i = 0; i < m; i++)
    {
        long x, y;
        char c;
        cin >> x >> y >> c;
        if (c == 'B')
        {
            if (gyou_white.size() != 0)
            {
                auto xxx = gyou_white.lower_bound({x, y});
                if(*xxx.first > y)
                {

                }
            }
            gyou_black.insert({x,y});
        }
        else
        {
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}