#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l;
    cin >> l;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > l)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}