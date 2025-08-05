#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<long,long>> x(n);
    long mi = 0;
    long ma = 0;
    for(int i = 0;i < n;i++)
    {
        cin >> x[i].first >> x[i].second;
        mi += x[i].first;
        ma += x[i].second;
    }
    if(mi <= 0 && 0 <= ma)
    {
        cout << "Yes" << endl;
        long div = ma;
        for(int i = 0;i < n;i++)
        {
            if(div > 0)
            {
                if(div - (x[i].second - x[i].first) > 0)
                {
                    cout << x[i].first << ' ';
                    div -= x[i].second - x[i].first;
                }
                else
                {
                    cout << x[i].second - div << ' ';
                    div = 0;
                }
            }
            else
            {
                cout << x[i].second << ' ';
            }
        }
        cout << endl;
    }
    else
    {
        cout << "No" << endl;
    }

}