#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(m,0);
    vector<bool> check(m);
    for(int i = 0;i < m;i++)
    {
        int c;
        cin >> c;
        for(int j = 0;j < c;j++)
        {
            int tem;
            cin >> tem;
            a[i] += (1 << (tem - 1));
        }
        char r;
        cin >> r;
        if(r == 'o')
        {
            check[i] = true;
        }
        else
        {
            check[i] = false;
        }
    }
    int ans = 0;
    for(int i = 0;i < (1 << n);i++)
    {
        vector<int> sum(m,0);
        for(int j = 0;j < m;j++)
        {
            for(int kk = 0;kk < n;kk++)
            {
                if((1 << kk) & a[j] & i)
                {
                    sum[j]++;
                }
            }
        }
        for(int j = 0;j < m;j++)
        {
            if(sum[j] < k && check[j])
            {
                ans--;
                break;
            }
            else if(sum[j] >= k && check[j] == false)
            {
                ans--;
                break;
            }
        }
        ans++;
    }
    cout << ans << endl;
}