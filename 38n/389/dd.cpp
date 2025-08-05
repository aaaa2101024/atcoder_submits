#include <bits/stdc++.h>
using namespace std;

int main()
{
    double nt2 = sqrt(2);
    long n;
    cin >> n;
    long ans = 0;
    double check = 1;
    for (;; check++)
    {
        double x = (check - 0.5) * nt2;
        if (x > n)
        {
            check--;
            break;
        }
    }
    long check2 = check;
    ans += (check2 * 2 - 1) * (check2 * 2 - 1);
    double x_mi = -1 * n + 0.5;
    double x_pl = n - 0.5;
    double y_mi = -1 * n + 0.5;
    double y_pl = n - 0.5;
    long temp = 0;
    for (long i = 0; i < n - 1; i++)
    {
        for (long j = 0; j < n - 1 && (x_mi + i < -1 * check2 || y_mi + j < -1 * check2); j++)
        {
            double check3 = sqrt((x_mi + i) * (x_mi + i) + (y_mi + j) * (y_mi + j));
            if (check3 <= n)
            {
                temp++;
            }
        }
    }
    ans += temp * 4;
    long temp2 = 0;
    for (int i = 0; i < n - 1 && y_mi + i < -1 * check2; i++)
    {
        double check_2 = sqrt(0.5 * 0.5 + (y_mi + i) * (y_mi + i));
        if (check_2 <= n)
        {
            ans += 4;
        }
    }

    cout << ans << endl;
}