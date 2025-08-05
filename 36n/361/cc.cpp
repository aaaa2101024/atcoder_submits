#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<long> a(n);
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    long ans = 1 << 30;
    for(int i = n - k - 1,j = 0;i < n;i++,j++)
    {
        ans = min(ans,a[i] - a[j]);
    }
    cout << ans << endl;
}