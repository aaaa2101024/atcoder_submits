#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a, m, l, r;
    cin >> a >> m >> l >> r;
    long ans = 0;
    l -= a;
    r -= a;
    if (l == r)
    {
        if (l % m == 0)
            ans++;
    }
    else
    {
        long left = l / m;
        long right = r / m;
        ans += right - left;
        if(l % m == 0 || r % m == 0)
        {
            ans++;
        }
        else if (l % m == 0)
            ans++;
        else if (r % m == 0)
            ans++;
    }
    cout << ans << endl;
}