#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;
    if (a != b)
    {
        ans++;
        if ((a + b) / 2 == (a + b) / 2.0)
            ans++;
        cout << ans << endl;
    }
    else
        cout << ans << endl;
}