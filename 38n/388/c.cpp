#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    map<long, long> ac;
    vector<long> check(0);
    long Min = 1l << 60;
    long Max = 0;
    for (long i = 0; i < n; i++)
    {
        long x;
        cin >> x;

        if (ac.count(x))
        {
            ac[x]++;
        }
        else
        {
            ac[x] = 1;
        check.push_back(x);
            Min = min(Min, x);
            Max = max(Max, x);
        }
    }
    map<long, long> ac_sum;
    ac_sum[Min] = n;
    for (auto x : ac)
    {
        if (ac_sum.count(x.first))
        {
            //
        }
        else
        {
            ac_sum[x.first] = ac_sum[Min] - ac[Min];
            Min = x.first;
        }
    }
    sort(check.begin(),check.end());
    long ans = 0;
    for (auto x : ac)
    {
        int xx = x.first * 2;
        if (Max < xx)
        {
            break;
        }
        long left = 0;
        long right = check.size() - 1;
        while (true)
        {
            long mid = (left + right) / 2;
            if (left == right || left + 1 == right)
            {
                break;
            }
            else if (check[mid] >= xx)
            {
                right = mid;
            }
            else
            {
                left = mid;
            }
        }
        long yy = ac_sum[check[left + 1]];
        ans += yy * x.second;
    }
    cout << ans << endl;
}