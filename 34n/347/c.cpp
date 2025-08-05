#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, a, b;
    cin >> n >> a >> b;
    long week = a + b;
    long left = 1l << 60, right = -1;
    long second_left = 1l << 60;
    bool flag = false;
    vector<long> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        d[i] %= week;
        left = min(left, d[i]);
        right = max(right, d[i]);
        if (d[i] == 0)
        {
            flag = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (d[i] != left)
        {
            second_left = min(second_left, d[i]);
        }
    }
    if (right - left < a)
    {
        cout << "Yes" << endl;
        return 0;
    }
    else if (second_left == right)
    {
        if (week - right < a)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    else if (week - right + second_left < a && flag)
    {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}
