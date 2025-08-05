#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long ans = 0;
    if(n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        ans += (2 * n - 3) * (2 * n - 3);
        double x_mi = -1 * n + 0.5;
        double x_pl = n - 0.5;
        double y_mi = -1 * n + 0.5;
        double y_pl = n - 0.5;
        long temp = 0;
        for(int i = 0;i < n - 1;i++)
        {
            double check = sqrt((x_mi + i) * (x_mi + i) + y_mi * y_mi);
            if(check <= n)
            {
                temp++;
            }
        }
        ans += temp * 8;
        double check_2 = sqrt(0.5 * 0.5 + y_mi * y_mi);
        if(check_2 <= n)
        {
            ans += 4;
        }
    }
    cout << ans << endl;
}