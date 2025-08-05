#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, m;
    cin >> n >> m;
    vector<pair<long, long>> lr(n);
    for (long i = 0; i < n; i++)
    {
        cin >> lr[i].first >> lr[i].second;
    }
    int pre_second = 1;
    sort(lr.begin(), lr.end(),greater<>());
    long sum = m * (m + 1) / 2;
    for(int i = 0;i < n - 1;i++)
    {
        if(lr[i].first != lr[i + 1].first)
        {
            sum -= lr[i].first * (lr[i].first + 1) / 2 - lr[i].first * (lr[i].first - 1) / 2 - abs(lr[i].first - lr[i].second);
        }
    }
    sum -= lr[n - 1].first * (lr[n - 1].first + 1) / 2 - lr[n - 1].first * (lr[n - 1].first - 1) / 2 - abs(lr[n - 1].first - lr[n - 1].second);
    cout << sum << endl;
}