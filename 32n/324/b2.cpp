#include <bits/stdc++.h>
using namespace std;

int main()
{
    //longには気を付けよう！！！！！
    long n;
    cin >> n;
    while (true)
    {
        if (n % 2 != 0)
        {
            break;
        }
        else
        {
            n /= 2;
        }
    }
    while (true)
    {
        if (n % 3 != 0)
        {
            break;
        }
        else
        {
            n /= 3;
        }
    }
    if (n == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}