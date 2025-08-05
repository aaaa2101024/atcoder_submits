#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> x(n + 2),y(n + 2);
    x[0] = 0;
    y[0] = 0;
    for(int i = 1;i < n + 1;i++)
        cin >> x[i] >> y[i];
    x[n + 1] = 0;
    y[n + 1] = 0;
    long double ans = 0;
    for(int i = 0;i < n + 1;i++)
    {
        long double a = x[i] - x[i + 1];
        long double b = y[i] - y[i + 1];
        ans += sqrt(a * a + b * b);
    }
    printf("%10Lf\n",ans);
}