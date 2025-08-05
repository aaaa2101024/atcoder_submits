#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long ans = -1;
    long mm = -1;
    vector<pair<long,long>> a(n);
    for(int i = 0;i < n;i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(),a.end());
    for(int i = 0;i < n - 2;i++)
    {
        if(a[i].first != a[i + 1].first && a[i + 1].first != a[i + 2].first)
        {
            if(mm < a[i + 1].first)
            {
                mm = a[i + 1].first;
                ans = a[i + 1].second;
            }
        }
    }
    if(mm < a[0].first && a[0].first != a[1].first)
    {
        mm = a[0].first;
        ans = a[0].second;
    }
    if(mm < a[n - 1].first && a[n - 1].first != a[n - 2].first)
    {
        ans = a[n - 1].second;
    }
    cout << ans << endl;
}