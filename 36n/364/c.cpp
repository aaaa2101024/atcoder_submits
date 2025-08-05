#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long x, y;
    cin >> n;
    cin >> x >> y;
    int ans = 1 << 30;
    vector<pair<long,long>> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second;
    }
    for(int i = 0;i < n;i++)
    {
        b[i].first = a[i].second;
        b[i].second = a[i].first;
    }
    sort(a.begin(),a.end(),greater<>());
    sort(b.begin(),b.end(),greater<>());
    long a_s = 0, b_s = 0;
    for (int i = 0; i < n; i++)
    {
        a_s += a[i].first;
        b_s += a[i].second;
        if (a_s > x || b_s > y)
        {
            ans = min(ans, i + 1);
            break;
        }
        else if (i == n - 1)
        {
            ans = min(ans, n);
        }
    }
    a_s = 0, b_s = 0;
    for (int i = 0; i < n; i++)
    {
        b_s += b[i].first;
        a_s += b[i].second;
        if (a_s > x || b_s > y)
        {
            ans = min(ans, i + 1);
            break;
        }
        else if (i == n - 1)
        {
            ans = min(ans, n);
        }
    }
    cout << ans << endl;
}