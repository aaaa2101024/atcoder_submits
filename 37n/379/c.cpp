#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    long m;
    cin >> n >> m;
    long count = 0;
    vector<pair<long, long>> xa(m);
    vector<pair<long, long>> nokori(0);
    for (long i = 0; i < m; i++)
    {
        cin >> xa[i].first;
    }
    for (long i = 0; i < m; i++)
    {
        cin >> xa[i].second;
    }
    for (int i = 0; i < m; i++)
    {
        if (i == m - 1)
        {
            long temp = n - xa[i].first;
            if (temp == xa[i].second)
            {
                count += (temp - 1) * temp / 2;
                if (temp < xa[i].second)
                {
                    nokori.emplace_back(xa[i].first, xa[i].second - temp);
                }
            }
            else
            {
                count += (xa[i].second - 1) * xa[i].second / 2;
                xa[i].first += xa[i].second - 1;
                bool flag = true;
                for (int j = nokori.size() - 1; j >= 0; j--)
                {
                    if (xa[i].second + nokori[j].second >= temp)
                    {

                        long sa = temp - xa[i].second;
                        count += sa * (xa[i].first - nokori[j].first) + (sa - 1) * sa / 2;
                        nokori[j].second -= sa;
                        flag = false;
                        break;
                    }
                    else
                    {
                        count += (xa[i].first - nokori[j].first) * xa[j].second + (nokori[j].second - 1) * nokori[j].second / 2;
                        xa[i].second += nokori[j].second;
                        xa[i].first += nokori[j].second;
                        nokori[j].second = 0;
                    }
                }
                if (flag)
                {
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
        else
        {
            long temp = xa[i + 1].first - xa[i].first;
            if (temp == xa[i].second)
            {
                count += (temp - 1) * temp / 2;
                if (temp < xa[i].second)
                {
                    nokori.emplace_back(xa[i].first, xa[i].second - temp);
                }
            }
            else
            {
                count += (xa[i].second - 1) * xa[i].second / 2;
                xa[i].first += xa[i].second - 1;
                bool flag = true;
                for (int j = nokori.size() - 1; j >= 0; j--)
                {
                    if (xa[i].second + nokori[j].second >= temp)
                    {

                        long sa = temp - xa[i].second;
                        count += sa * (xa[i].first - nokori[j].first) + (sa - 1) * sa / 2;
                        nokori[j].second -= sa;
                        flag = false;
                        break;
                    }
                    else
                    {
                        count += (xa[i].first - nokori[j].first) * xa[j].second + (nokori[j].second - 1) * nokori[j].second / 2;
                        xa[i].second += nokori[j].second;
                        xa[i].first += nokori[j].second;
                        nokori[j].second = 0;
                    }
                }
                if (flag)
                {
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
    }
}