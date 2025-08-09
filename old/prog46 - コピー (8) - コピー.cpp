#include<bits/stdc++.h>
#include<random>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<long>> a(n,vector<long>(m));
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            cin >> a[i][j];
        }
    }
    long ans = 0;
    for(int i = 0;i < m;i++)
    {
        for(int j = i + 1;j < m;j++)
        {
            long temp = 0;
            for(int k = 0;k < n;k++)
            {
                temp += max(a[k][i],a[k][j]);
            }
            ans = max(ans,temp);
        }
    }
    cout << ans << endl;
}