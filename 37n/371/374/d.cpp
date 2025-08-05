#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, t;
    cin >> n >> s >> t;
    vector<vector<int>> a(n, vector<int>(4));
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<double> dis(n);
    for (int i = 0; i < n; i++)
    {
        ans += sqrt((a[i][0] - a[i][2]) * (a[i][0] - a[i][2]) + (a[i][1] - a[i][3]) * (a[i][1] - a[i][3])) / t;
    }
    for(int bit = 0;bit < (1 << n);bit++)
    {
        vector<bool> passed(n,true);
        vector<pair<bool,bool>> check(n,{false,false});
        for(int i = 0;i < n;i++)
        {
            if(bit & (1 < i))
            {
                check[i].first = true;
            }
            else
            {
                check[i].second = false;
            }
            for(int i = 0;i < n;i++)
            {

            }
        }
    }
    cout << ans << endl;
}