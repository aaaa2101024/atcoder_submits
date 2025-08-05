#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    string s;
    string t;
    cin >> k >> s >> t;
    bool ans = false;
    int n = s.size();
    int m = t.size();
    if (n + 1 == m)
    {
        bool check = false;
        for (int i = 0, j = 0; i < n; i++, j++)
        {
            if (s[i] != t[j])
            {
                if (check)
                {
                    cout << "No" << endl;
                    return 0;
                }
                else
                {
                    check = true;
                    i--;
                }
            }
        }
        ans = true;
    }
    else if (n == m + 1)
    {
        bool check = false;
        for (int i = 0, j = 0; j < m; i++, j++)
        {
            if (s[i] != t[j])
            {
                if (check)
                {
                    cout << "No" << endl;
                    return 0;
                }
                else
                {
                    check = true;
                    j--;
                }
            }
        }
        ans = true;
    }
    else if (n == m)
    {
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                if (check)
                {
                    cout << "No" << endl;
                    return 0;
                }
                else
                {
                    check = true;
                }
            }
        }
        ans = true;
    }
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}