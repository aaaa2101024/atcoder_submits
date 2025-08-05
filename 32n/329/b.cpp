#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = -1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max1 = 0;
    for (int i = 0; i < n; i++)
    {
        max1 = max(max1, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (max1 == a[i])
            continue;
        ans = max(ans,a[i]);
    }
    cout << ans << endl;
}