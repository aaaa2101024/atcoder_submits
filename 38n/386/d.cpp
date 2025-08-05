#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, m;
    cin >> n >> m;
    bool flag = true;
    map<long, long> gyou_white;
    map<long, long> gyou_black;
    map<long, long> retu_white;
    map<long, long> retu_black;
    for (int i = 0; i < m; i++)
    {
        long x, y;
        char c;
        cin >> x >> y >> c;
      if (c == 'B')
        {
            if (gyou_black.count(x))
            {
                if (gyou_black[x] < y)
                {
                    flag = false;
                }
                else
                {
                    gyou_white[x] = min(y, gyou_white[x]);
                }
            }
            else
            {
                gyou_white[x] = y;
            }
            if (retu_black.count(y))
            {
                if (retu_black[y] < x)
                {
                    flag = false;
                }
                else
                {
                    retu_white[y] = min(x, retu_white[y]);
                }
            }
            else
            {
                retu_white[y] = x;
            }
        }
        else if (c == 'W')
        {
            if (gyou_white.count(x))
            {
                if (gyou_white[x] > y)
                {
                    flag = false;
                }
                else
                {
                    gyou_black[x] = max(y, gyou_black[x]);
                }
            }
            else
            {
                gyou_black[x] = y;
            }
            if (retu_white.count(y))
            {
                if (retu_white[y] > x)
                {
                    flag = false;
                }
                else
                {
                    retu_black[y] = max(x, retu_black[y]);
                }
            }
            else
            {
                retu_black[y] = x;
            }
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