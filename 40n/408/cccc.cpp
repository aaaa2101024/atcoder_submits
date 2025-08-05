#include <bits/stdc++.h>
using namespace std;
using vl = vector<long long>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (long long i = 0; i < n; i++)
constexpr long long INF = (1 << 30);
#define Yes(x)                 \
    if (x)                     \
        cout << "Yes" << endl; \
    else                       \
        cout << "No" << endl;

int main()
{
    long long n, m;
    cin >> n >> m;
    vector<pair<long long, long long>> LR(m);

    rep(i, m)
    {
        cin >> LR[i].first >> LR[i].second;
    }
    long long ans = INF;
    sort(all(LR));
    long long test = 0;
    long long i = 0;
    priority_queue<long long, vector<long long>, greater<long long>> mmm;
    long long pre = LR[0].second;
    while (i < m && LR[i].first == 1)
    {
        test++;
        mmm.push(LR[i].second);
        pre = max(pre, LR[i].second);
        i++;
    }
    ans = min(test, ans);
    for (; i < m;)
    {
        while (i < m && !mmm.empty() && LR[i].first <= mmm.top())
        {
            mmm.push(LR[i].second);
            test++;
            pre = max(pre, LR[i].second);
            i++;
        }
        if (mmm.empty())
        {
            if (pre + 1 == LR[i].first)
            {
                mmm.push(LR[i].second);
                test++;
                pre = max(pre, LR[i].second);
                i++;
                ans = min(ans, test);
                continue;
            }
            else
            {
                cout << 0 << endl;
                return 0;
            }
        }
        ans = min(ans, test);
        test--;
        mmm.pop();
    }
    test = 0;
    for (i = 0; i < m; i++)
    {
        if (LR[i].second == n)
        {
            test++;
        }
    }
    cout << min(ans, test) << endl;
}