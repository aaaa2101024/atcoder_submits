#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    vector<string> t(0);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[count] != s[i])
        {
            t.push_back(s.substr(count, i - count));
            count = i;
        }
        else if (i == n - 1)
        {
            t.push_back(s.substr(count, i - count + 1));
        }
    }
    sort(t.begin(), t.end());
    long ans = 0;
    int maxs = 0;
    int l = t.size();
    count = 0;
    for (int i = 0; i < l; i++)
    {
        if (t[count][0] != t[i][0])
        {
            ans += maxs;
            maxs = 0;
            count = i + 1;
        }
        else
        {
            int _ = t[i].size();
            maxs = max(maxs, _);
        }
        if(i == l - 1)
        {
            int _ = t[i].size();
            ans += _;
        }
    }
    cout << ans << endl;
}