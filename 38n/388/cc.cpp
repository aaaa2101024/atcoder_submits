#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    map<long, long> ac;
    set<long> check;
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
            check.insert(x);
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
    long ans = 0;
    for (auto x : ac)
    {
        long xx = x.first * 2;
        auto it = check.lower_bound(xx);
        if(it != check.end())
        ans += x.second * ac_sum[*it];
    }
    cout << ans << endl;
}