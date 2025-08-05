#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<long, long>> qr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> qr[i].first >> qr[i].second;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        long t, d;
        cin >> t >> d;
        if (d % qr[t - 1].first <= qr[t - 1].second)
            cout << d / qr[t - 1].first * qr[t - 1].first + qr[t - 1].second << endl;
        else
            cout << (d / qr[t - 1].first + 1) * (qr[t - 1].first) + qr[t - 1].second << endl;
    }
}