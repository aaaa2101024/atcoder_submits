#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> g(n, vector<bool>(n));
    vector<bool> check(n, false);
    check[0] = true;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        g[a - 1][b - 1] = true;
        g[b - 1][a - 1] = true;
        cin >> a >> b;
    }
    int ans = 0;
    
    cout << ans << endl;
}