#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<long,long>> a(n);
    for(int i = 0;i < n;i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(),a.end());
    long ans = -1;
    for(int i = 0;i < n - 1;i++)
    {
        if(a[i] != a[i + 1])
        {
            ans = max(ans,a[i].second);
        }
    }
    if(a[n - 1] != a[n - 2])
    {
        ans = max(ans,max(a[n - 1].second,a[n - 2].second));
    }

    cout << ans << endl;
}