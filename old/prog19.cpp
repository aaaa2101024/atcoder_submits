#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> yaku(0);
    for (int i = 1; i <= 9; i++)
    {
        if (n % i == 0)
        {
            yaku.push_back(i);
        }
    }
    cout << 1;
    for (int i = 1; i <= n; i++)
    {
        bool can = true;
        for (int j = 0; j < yaku.size(); j++)
        {
            if (i % (n / yaku[j]) == 0)
            {
                cout << yaku[j];
                can = false;
                break;
            }
        }
        if (can)
        {
            cout << '-';
        }
    }
    cout << endl;
}