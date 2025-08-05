#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int count = 0;
    for(int i = 0;i < n;ans++)
    {
        for(;count + a[i] <= k && i < n;i++)
        {
            count += a[i];
        }
        count = 0;
    }
    cout << ans << endl;
}