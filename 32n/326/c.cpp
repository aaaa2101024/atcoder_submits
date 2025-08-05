#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,m;
    cin >> n >> m;
    vector<long> a(n);
    map<long,long> sum;
    set<long> check;
    for(long i = 0;i < n;i++)
    {
        cin >> a[i];
        check.insert(a[i]);
    }
    sort(a.begin(),a.end());
    sum[a[0]] = 1;
    for(long i = 1;i < n;i++)
    {
        if(sum.count(a[i]))
        {
            sum[a[i]]++;
        }
        else
        {
            sum[a[i]] = sum[a[i - 1]] + 1;
        }
    }
    long ans = 0;
    for(auto left:check)
    {
        auto right = check.lower_bound(left + m - 1);
        ans = max(ans,sum[*right] - sum[left]);
    }
    cout << ans << endl;

}