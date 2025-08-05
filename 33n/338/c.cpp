#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    vector<long> q(n), a(n), b(n);
    for (long i = 0; i < n; i++)
        cin >> q[i];
    for (long i = 0; i < n; i++)
        cin >> a[i];
    for (long i = 0; i < n; i++)
        cin >> b[i];

    long ans = 0;
    for (long i = 0; i <= 1000000; i++)
    {
        long temp = 0;
        vector<long> check(n);
        for (long j = 0; j < n; j++)
            check[j] = q[j];
        bool flag1 = false;
        for (long j = 0; j < n; j++)
        {
            check[j] -= i * a[j];
            if (check[j] < 0)
                flag1 = true;
        }
        if (flag1)
            break;
        else
        {
            temp += i;
            long m = 1 << 30;
            bool flag2 = true;
            for (long j = 0; j < n; j++)
            {
                if (b[j] != 0)
                {
                    m = min(m, check[j] / b[j]);
                }
            }
            temp += m;
            ans = max(ans, temp);
        }
    }
    cout << ans << endl;
}