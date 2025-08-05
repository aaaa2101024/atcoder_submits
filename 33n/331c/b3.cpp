#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,m,l;
    cin >> n >> s >> m >> l;
    int sum = 0;
    int ans = 100000000;
    for(int x = 0;x <= n/6 + 1;x++)
    {
        for(int y = 0;y <= n/8 + 1;y++)
        {
            for(int z = 0;z <= n/12 + 1;z++)
            {
                if(6 * x + 8 * y + 12 * z >= n)
                {
                    ans = min(ans,s * x + m * y + l * z);
                }
            }
        }
    }
    cout << ans << endl;
}