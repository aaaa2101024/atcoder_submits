#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> s(n), t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].first;
        s[i].second = i + 1;
        t[i].first = s[i].first;
        t[i].second = s[i].second;
    }
    sort(s.begin(), s.end());
    vector<bool> check(n, true);
    vector<pair<int, int>> ans(0);
    for (int i = 0; i < n; i++)
    {
        if(t[i].first != i + 1)
        {
            ans.emplace_back(i + 1,s[i].second);
            s[t[i].first - 1].second = s[i].second;
            swap(t[i].first,t[s[i].second - 1].first);
        }
    }
    int m = ans.size();
    cout << m << endl;
    for (int i = 0; i < m; i++)
    {
        cout << ans[i].first << ' ' << ans[i].second << endl;
    }
}