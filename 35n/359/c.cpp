#include <bits/stdc++.h>
using namespace std;

int main()
{
    long sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    long ans = 0;
    ans += abs(sy - ty);
    if (sy % 2 == 0)
    {
        if (sx % 2 == 1 && sx > tx)
        {
            sx--;
        }
        else if (sx % 2 == 0 && sx < tx)
        {
            sx++;
        }
    }
    else
    {
        if (sx % 2 == 1 && sx < tx)
        {
            sx++;
        }
        else if (sx % 2 == 0 && sx > tx)
        {
            sx--;
        }
    }

    if (ty % 2 == 0)
    {
        if (tx % 2 == 1 && sx < tx)
        {
            tx--;
        }
        else if (tx % 2 == 0 && sx > tx)
        {
            tx++;
        }
    }
    else
    {
        if (tx % 2 == 1 && sx > tx)
        {
            tx++;
        }
        else if (tx % 2 == 0 && sx < tx)
        {
            tx--;
        }
    }
    if (sy != ty)
    {
        if (ans < abs(tx - sx))
        {
            ans += abs(tx - sx) - ans;
        }
    }
    else if (sy == ty)
    {
        if (sx == tx)
        {
            ans = 0;
        }
        else
        {
            ans += abs(sx - tx) / 2 + 1;
        }
    }
    cout << ans << endl;
}