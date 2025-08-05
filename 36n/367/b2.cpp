#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x;
    cin >> x;
    x *= 100;
    for(int i = 0;i < 2;i++)
    {
        if(round(x) == x)
        {
            x = round(x);
        }
        x /= 10;
    }
    cout << x << endl;
}