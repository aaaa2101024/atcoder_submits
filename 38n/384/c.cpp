#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,string> &x,pair<int,string> &y)
{
    if(x.first == y.first)
    {
        return x.second > y.second;
    }
    else
    {
        return x.first < y.first;
    }
}



int main()
{
    vector<int> a(5);
    for(int i = 0;i < 5;i++)
    {
        cin >> a[i];
    }
    vector<pair<int,string>> ans(32);
    for(int i = 0;i < (1 << 5);i++)
    {
        for(int j = 0;j < 5;j++)
        {
            if(i & (1 << j))
            {
                ans[i].first += a[j];
                ans[i].second += char('A' + j);
            }
        }
    }
    sort(ans.begin(),ans.end(),compare);
    reverse(ans.begin(),ans.end());
    for(int i = 0;i < 31;i++)
    {
        cout << ans[i].second << endl;
    }
}