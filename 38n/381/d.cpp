#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n;)
    {
        set<int> temp;
        int j = i;
        map<int, int> tttt;
        for (int count = 0; j < n - 1; j += 2, count += 2)
        {
            if (a[j] == a[j + 1])
            {
                if (temp.count(a[j]))
                {
                    ans = max(ans, count);
                    j = tttt[a[j]];
                    break;
                }
                else
                {
                    temp.insert(a[j]);
                    tttt[a[j]] = j;
                }
            }
            else
            {
                ans = max(ans, count);
                break;
            }
            if (j >= n - 3)
            {
                count += 2;
                ans = max(ans, count);
                break;
            }
        }
        i = j + 2;
    }
    for (int i = 1; i < n;)
    {
        set<int> temp;
        map<int, int> tttt;
        int j = i;
        for (int count = 0; j < n - 1; j += 2, count += 2)
        {
            if (a[j] == a[j + 1])
            {
                if (temp.count(a[j]))
                {
                    ans = max(ans, count);
                    j = tttt[a[j]];
                    break;
                }
                else
                {
                    temp.insert(a[j]);
                    tttt[a[j]] = j;
                }
            }
            else
            {
                ans = max(ans, count);

                break;
            }
            if (j >= n - 3)
            {
                count += 2;
                ans = max(ans, count);
                break;
            }
        }
        i = j + 2;
    }

    cout << ans << endl;
}