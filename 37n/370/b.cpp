#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int temp;
            cin >> temp;
            a.at(i).push_back(temp - 1);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(ans >= i)
        {
            ans = a[ans][i];
        }
        else if(ans < i)
        {
            ans = a[i][ans];
        }
    }
    cout << ans + 1 << endl;
}