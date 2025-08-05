#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    map<int, int> ver, hor, tr;
    if(n == 2)
    {
        if(t >= 2)
        {
            cout << 2 << endl;
            return 0;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        ver[i] = 0;
        hor[i] = 0;
    }
    tr[0] = 0;
    tr[1] = 0;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        ver[x % n]++;
        hor[(x - 1) / n]++;
        if (ver[x % n] == n || hor[(x - 1) / n] == n)
        {
            cout << i + 1 << endl;
            return 0;
        }
        if (x % (n + 1) == 1)
        {
            tr[0]++;
        }
        if (x != 1 && x != n * n && x % (n - 1) == 1)
        {
            tr[1]++;
        }
        if (tr[0] == n || tr[1] == n)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}