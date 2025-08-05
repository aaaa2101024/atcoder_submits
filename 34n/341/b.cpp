#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    vector<long> a(n);
    for (long i = 0; i < n; i++)
        cin >> a[i];
    vector<pair<long, long>> s(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> s[i].first >> s[i].second;
    for (long i = 0; i < n - 1; i++)
    {
        long x = a[i] / s[i].first;
        a[i + 1] += s[i].second * x;
    }
    cout << a[n - 1] << endl;
}