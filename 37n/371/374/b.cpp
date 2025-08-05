#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int ans = 0;
    int ss = s.size(), tt = t.size();
    if (ss != tt)
    {
        int n = min(ss, tt);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if(s[i] != t[i])
            {
                ans = i + 1;
                flag = false;
                break;
            }
        }
        if(flag)
        ans = n + 1;
    }
    else
    {
        int n = ss;
        for(int i = 0;i < n;i++)
        {
            if(s[i] != t[i])
            {
                ans = i + 1;
                break;
            }
        }
    }
    cout << ans << endl;
}