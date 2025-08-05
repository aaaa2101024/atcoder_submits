#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int ho = 0;
    for(int i = 0;i < n;i++)
    {
        int t,v;
        cin >> t >> v;
        ans = max(0,ans - t + ho);
        ans += v;
        ho = t;
    }
    cout << ans << endl;
}