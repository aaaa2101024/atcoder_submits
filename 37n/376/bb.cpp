#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<char> h(q);
    vector<int> t(q);
    for (int i = 0; i < q; i++)
    {
        cin >> h[i] >> t[i];
    }
    int ans = 0;
    pair<int, int> loc = {1 , 2};
    for (int i = 0; i < q; i++)
    {
        int count = 0;
        bool bre = false;
        switch (h[i])
        {
        case 'R':
            for (int j = loc.second % n; j <= n + loc.second; j++, count++)
            {
                if (bre)
                    break;
                if (j % n == loc.first % n)
                {
                    count = 0;
                    for (int k = loc.second + n; k >= loc.second; k--, count++)
                    {
                        if (k % n == t[i] % n)
                        {
                            ans += count;
                            loc.second = t[i];
                            bre = true;
                            break;
                        }
                    }
                }
                else if (j % n == t[i] % n)
                {
                    ans += count;
                    loc.second = t[i];
                    break;
                }
            }
            break;
        case 'L':
            for (int j = loc.first; j <= n + loc.first; j++, count++)
            {
                if (bre)
                    break;
                if (j % n == loc.second % n)
                {
                    count = 0;
                    for (int k = loc.first + n; k >= loc.first; k--, count++)
                    {
                        if (k % n == t[i] % n)
                        {
                            ans += count;
                            loc.first = t[i];
                            bre = true;
                            break;
                        }
                    }
                }
                else if (j % n == t[i] % n)
                {
                    ans += count;
                    loc.first = t[i];
                    break;
                }
            }
            break;
        }
    }
    cout << ans << endl;
}