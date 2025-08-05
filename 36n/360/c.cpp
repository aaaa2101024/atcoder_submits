#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,long>> aw(n);
    for(int i = 0;i < n;i++)
    {
        cin >> aw[i].first;
    }
    for(int i = 0;i < n;i++)
    {
        cin >> aw[i].second;
    }
    
    long ans = 0;
    sort(aw.begin(),aw.end());
    for(int i = 0;i < n - 1;i++)
    {
        if(aw[i].first == aw[i + 1].first)
        {
            ans += aw[i].second;
        }
    }
    cout << ans << endl;
}