#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        int locx = 0, locy = 0;
        for (int i = 0; i < n; i++)
        {
            if (p[i] == x)
            {
                locx = i;
            }
            if (p[i] == y)
            {
                locy = i;
            }
        }
        if (locx < locy)
        {
            cout << x << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
}