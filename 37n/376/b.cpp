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
    int left = 0;
    int right = 1;
    for (int i = 0; i < q; i++)
    {
        int count = 0;
        if (h[i] == 'R')
        {
            for (int j = right; true; j++, count++)
            {
                bool check = false;
                if (check)
                    break;
                if (j % n == t[i] % n)
                {
                    ans += count;
                    right = t[i] % n;
                    break;
                }
                else if (j % n == left)
                {
                    count = 0;
                    for (int k = right + n; true; count++, k--)
                    {
                        if (k % n == t[i])
                            ans += count;
                        right = t[i] % n;
                        check = true;
                        break;
                    }
                }
            }
        }
        else
        {
            for (int j = left; true; j++, count++)
            {
                bool check = false;
                if (check)
                    break;
                if (j % n == t[i] % n)
                {
                    ans += count;
                    left = t[i] % n;
                    break;
                }
                else if (j % n == right)
                {
                    count = 0;
                    for (int k = left + n; true; count++, k--)
                    {
                        if (k % n == t[i])
                            ans += count;
                        left = t[i] % n;
                        check = true;
                        break;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}