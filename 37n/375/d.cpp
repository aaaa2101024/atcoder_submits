#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> f(26, 0), l(26, 0), pre(26, 0), sum(26, 0);
    long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (f[s[i] - 'A'] == 0)
        {
            f[s[i] - 'A'] = i + 1;
        }
        else
        {
            pre[s[i] - 'A'] = l[s[i] - 'A'];
        }
        l[s[i] - 'A'] = i + 1;
        sum[s[i] - 'A']++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (pre[s[i] - 'A'] == f[s[i] - 'A'])
        {
            if (f[s[i] - 'A'] == i + 1)
            {
                ans += l[s[i] - 'A'] - f[s[i] - 'A'] - 1;
            }
            else
                continue;
        }
        else if (l[s[i] - 'A'] == i + 1)
        {
            continue;
        }
        else if (pre[s[i] - 'A'] == 0)
        {
            continue;
        }
        else
        {
            long temp = l[s[i] - 'A'] - (i + 1) - sum[s[i] - 'A'] + 1;
            if (s[i] != s[i + 1])
                temp--;
            ans += (l[s[i] - 'A'] - (i + 1)) * (l[s[i] - 'A'] - (i + 1) - 1) / 2 - (temp) * (temp + 1) / 2;
        }
        sum[s[i] - 'A']--;
    }
    cout << ans << endl;
}