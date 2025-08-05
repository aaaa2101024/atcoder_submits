#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> per(n);
    vector<int> time(n);
    for (int i = 0; i < n; i++)
    {
        cin >> per[i] >> time[i];
    }
    int ans = 0;
    for (int i = 0; i < 24; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (9 <= (time[j] + i) % 24 && (time[j] + i) % 24 <= 17)
            {
                count += per[j];
            }
        }
    ans = max(count,ans);
    }
    cout << ans << endl;
}