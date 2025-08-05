#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, g, m;
    cin >> k >> g >> m;
    int mag = 0, glass = 0;
    for (int i = 0; i < k; i++)
    {
        if (glass == g)
            glass = 0;
        else if (mag == 0)
            mag = m;
        else
        {
            if (glass + mag > g)
            {
                mag = (glass + mag - g);
                glass = g;
            }
            else
            {
                glass += mag;
                mag = 0;
            }
        }
    }
    cout << glass << ' ' << mag << endl;
}