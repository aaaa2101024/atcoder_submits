#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    while (true)
    {
        ans++;
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        a[0]--;
        a[1]--;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
                count++;
        }
        if(count <= 1)
        break;
    }
    cout << ans << endl;
}