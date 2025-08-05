#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, m;
    cin >> n >> m;
    vector<long> a(n);
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum <= m)
    {
        cout << "infinite" << endl;
        return 0;
    }
    sort(a.begin(), a.end());
    long left = 0, right = a[n - 1];
    long ans = (left + right) / 2;
    while (true)
    {
        ans = (left + right) / 2;
        long temp = 0;
        for (int i = 0; i < n; i++)
        {
            temp += min(ans, a[i]);
        }
        if (temp > m)
        {
            right = ans;
        }
        else if (left == right || left + 1 == right)
        {
            break;
        }
        else
        {
            left = ans;
        }
    }

    cout << ans << endl;
}