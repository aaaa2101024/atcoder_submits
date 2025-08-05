#include <bits/stdc++.h>
using namespace std;

void dfs(int count, int n, int m, vector<int> &a, vector<vector<int>> &ans)
{
    if (count == n - 1)
    {
        ans.push_back(vector<int>(a));
        return;
    }
    else
    {
        for (int j = a[count]; j + 10 * (n - count - 1) <= m; j++)
        {
            a[count + 1] = j + 10;
            dfs(count + 1, n, m, a, ans);
            a[count + 1] = 0;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n, 0);
    vector<vector<int>> ans(0);
    for (int i = 1; i + 10 * (n - 1) <= m; i++)
    {
        a[0] = i;
        dfs(0, n, m, a, ans);
    }
    int nn = ans.size();
    cout << nn << endl;
    for (int i = 0; i < nn; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }
}