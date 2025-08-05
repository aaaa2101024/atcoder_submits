#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, a, b;
    cin >> n >> a >> b;
    long week = a + b;
    long left = 1l << 60, right = -1;
    for (int i = 0; i < n; i++)
    {
        long day;
        cin >> day;
        day %= week;
        if (day != 0)
            left = min(left, day);
        right = max(right, day);
    }
    if(left == 1l << 60 || left == right)
    {
        left = 0;
    }
    if (right - left < a)
    {
        cout << "Yes" << endl;
    }
    else if (left + week - right < a)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}