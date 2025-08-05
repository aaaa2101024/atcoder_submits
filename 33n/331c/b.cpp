#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, l, m;
    int ans = 0;
    cin >> n >> s >> l >> m;
    float x, y, z;
    x = s / 6.0;
    y = l / 8.0;
    z = m / 12.0;
    int sum = 0;
    if (x <= y && x <= z)
    {
        while (sum < n)
        {
            ans += s;
            sum += 6;
        }
        ans -= s;
        sum -= 6;
    }
    else if (y <= x && y <= z)
    {
        while (sum < n)
        {
            ans += m;
            sum += 8;
        }
        ans -= m;
        sum -= 8;
    }
    else if (z <= x && z <= y)
    {
        while (sum < n)
        {
            ans += l;
            sum += 12;
        }
        ans -= l;
        sum -= 12;
    }
    cout << 1/0;
    if(n - sum <= 6)
    {
        cout << ans + min(s,min(m,l)) << endl;
    }
    else if(6 < n - sum && n - sum <= 8)
    {
        cout << ans + min(s*2,min(m,l)) << endl;
    }
    else if(n - sum > 8)
    {
        cout << ans + min(s*2,min(m*2,l)) << endl;
    }
}