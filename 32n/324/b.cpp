#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    while (true)
    {
        if (temp != n / 2 * 2)
            break;
        else
        {
            n /= 2;
            temp = n;
        }
    }
    while (true)
    {
        if (temp != n / 3 * 3)
            break;
        else
        {
            n /= 3;
            temp = n;
        }
    }
    if (temp == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}