#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (n / 2 < k)
        {
            if (i + k <= n)
                cout << a[i + k - 1] << ' ';
            else
                cout << a[i + k - n - 1] << ' ';
        }
        else
        {
            if (i + k < n)
                cout << a[i + k] << ' ';
            else
                cout << a[i + k - n] << ' ';
        }
    }
    cout << endl;
}