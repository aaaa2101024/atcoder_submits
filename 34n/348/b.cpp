#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n),y(n);
    for(int i = 0;i < n;i++)
    {
        cin >> x[i] >> y[i];
    }
    for(int i = 0;i < n;i++)
    {
        double check = 0;
        int ans = 0;
        for(int j = 0;j < n;j++)
        {
            int xx = x[i] - x[j];
            int yy = y[i] - y[j];
            double dis = sqrt(xx * xx + yy * yy);
            if(dis > check)
            {
                check = dis;
                ans = j;
            }
        }
        cout << ans + 1 << endl;
    }
}