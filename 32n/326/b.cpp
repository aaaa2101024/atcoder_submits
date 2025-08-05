#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (true)
    {
        int a, b, c;
        c = n % 10;
        b = (n / 10) % 10;
        a = (n / 100) % 10;
        if (a * b == c)
        {
            cout << n << endl;
            break;
        }
        else
        n++;
    }
}