#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, k;
    cin >> n >> k;
    set<long> a;
    long sum = k * (k + 1) / 2;
    for (int i = 0; i < n; i++)
    {
        long x;
        cin >> x;
        a.insert(x);
    }
    for (auto x : a)
    {
        if (x <= k)
            sum -= x;
    }
    cout << sum << endl;
}