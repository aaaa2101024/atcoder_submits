#include <bits/stdc++.h>
using namespace std;

bool compare(pair<char, int> &a, pair<char, int> &b)
{
    return a.second > b.second;
}

int main()
{
    string s;
    cin >> s;
    vector<pair<char, int>> ans(26);
    for (int i = 0; i < 26; i++)
    {
        ans[i].first = 'a' + i;
        ans[i].second = 0;
    }
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (s[i] == 'a' + j)
            {
                ans[j].second++;
            }
        }
    }
    sort(ans.begin(), ans.end(), compare);
    int temp = 101;
    for (int i = 0; i < 26; i+=2)
    {
        if(ans[i].second != ans[i + 1].second || temp == ans[i].second)
        {
            cout << "No" << endl;
            return 0;
        }
        else if(ans[i].second == 0)
        {
            break;
        }
        else
        {
            temp = ans[i].second;
        }
    }
    cout << "Yes" << endl;
}