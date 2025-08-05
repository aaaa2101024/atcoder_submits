#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if(l <= a[i] && a[i] <= r)
        {
            cout << a[i] << ' ';
        }
        else if(a[i] < l)
        {
            cout << l  << ' ';
        }
        else if(r < a[i])
        {
            cout << r << ' ';
        }
    }
    cout << endl;
}