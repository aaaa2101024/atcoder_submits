#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    string s;
    cin >> s;
    int n = s.size();
    vector<pair<char,int>> x(n);
    for(int i = 0;i < n;i++)
    {
         x[i].first = s[i];
         x[i].second = i;
    }
    sort(x.begin(),x.end());
    for(int i = 0;i < n - 1;i++)
    {
        ans += abs(x[i].second - x[i + 1].second);
    }
    cout << ans << endl;
}