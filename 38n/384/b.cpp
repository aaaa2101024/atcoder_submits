#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r;
    cin >> n >> r;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int a;
        cin >> a;
        switch (x)
        {
        case 1:
            if (1600 <= r && r <= 2799)
            {
                r += a;
            }
            break;
        case 2:
            if (1200 <= r && r <= 2399)
            {
                r += a;
            }
        }
    }
    cout << r << endl;
}