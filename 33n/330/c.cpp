#include <bits/stdc++.h>
using namespace std;

int main()
{
    long d;
    cin >> d;
    long ans = 3000000000000;
    for (long x = 0; x <= sqrt(d) + 1; x++)
    {
        long r = d - x*x;
        long y;
        if(r < 0)
        {
            y = 0;
        }
        else
        {
            y = sqrt(r);
        }
        ans = min(ans, min(abs(x * x + y * y - d),abs(x * x + (y + 1) * (y + 1) - d)));
    }
    cout << ans << endl;
}