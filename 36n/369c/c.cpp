#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n == 2)
    {
        cout << 3 << endl;
    }
    else
    {
        long ans = 2 * n - 1;
        vector<long> b(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            b[i] = a[i + 1] - a[i];
        }
        vector<long> c(n - 2);
        for (int i = 0; i < n - 2; i++)
        {
            c[i] = b[i + 1] - b[i];
        }
        int x = 0;
        int y = 0;
        while (x <= n - 2)
        {
            for (int i = y - 1; i < n - 2; i++)
            {
                if (c[i] != 0)
                    break;
                else
                    y++;
            }
            ans += (y - x) * (y - x + 1) / 2;
            y++;
            x = y;
        }
        cout << ans << endl;
    }
}