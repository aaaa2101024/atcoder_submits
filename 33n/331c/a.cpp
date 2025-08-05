#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M,D;
    cin >> M >> D;
    int y,m,d;
    cin >> y >> m >> d;
    if(d == D)
    {
        d = 1;
        if(m == M)
        {
            m = 1;
            cout << y + 1 << ' ' << m << ' ' << d << endl;
        }
        else
        {
            cout << y << ' ' << m + 1 << ' ' << d << endl;
        }
    }
    else
    {
        cout << y << ' ' << m << ' ' << d + 1 << endl;
    }
}