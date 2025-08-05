#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == n / 2 + 1)
            {
                cout << '=';
            }
            else
            {
                cout << '-';
            }
        }
    }
    else
    {
        for(int i = 0;i < n;i++)
        {
            if(i == n / 2 || i == n / 2 - 1)
            {
                cout << '=';
            }
            else
            {
                cout << '-';
            }
        }
    }
    cout << endl;
}