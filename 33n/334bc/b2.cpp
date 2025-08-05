#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a, m, l, r;
    cin >> a >> m >> l >> r;
    long ans = 0;
    if (l == r)
    {
        if (l % m == 0)
            ans++;
    }
    else
    {
        if (l % m == 0)
            ans++;
        if (r % m == 0)
            ans++;
        long left = l / m;
        long right = r / m;
        ans += right - left;
    }
    cout << ans << endl;
}