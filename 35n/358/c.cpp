#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int M = 1 << 30;
    for (int i = 0; i < (1 << n); i++)
    {
        vector<bool> check(m, false);
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                for (int k = 0; k < m; k++)
                {
                    if (s[j][k] == 'o')
                    {
                        check[k] = true;
                    }
                }
            }
        }
        bool flag = true;
        for (int j = 0; j < m; j++)
        {
            if (check[j] == false)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            M = min(M, __builtin_popcount(i));
        }
    }
    cout << M << endl;
}