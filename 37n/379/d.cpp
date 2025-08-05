#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    long day = 0;
    long ed = 0;
    long pre_day = -1;
    set<long> ds;
    map<long, int> sum;
    long temp = 0;
    sum[-1] = 0;
    for (int i = 0; i < q; i++)
    {
        int que;
        cin >> que;
        long t;
        switch (que)
        {
        case 1:
            if (ds.count(day))
            {
                temp++;
            }
            else
            {
                ds.insert(day);
                sum[day] = temp;
                temp++;
                pre_day = day;
            }
            break;
        case 2:
            cin >> t;
            day += t;
            sum[day] = temp;
            ds.insert(day);
            break;
        case 3:
            cin >> t;
            auto x = ds.upper_bound(day - t);
            cout << sum[*x] - ed << endl;
            ed = sum[*x];
            break;
        }
    }
}