#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long count = 0;
    int ans = 0;
    for(int i = 0;count <= n;i++)
    {
        count += 1l << i;
        ans++;
    }
    cout << ans << endl;
}