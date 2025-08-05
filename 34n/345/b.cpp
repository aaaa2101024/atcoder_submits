#include<bits/stdc++.h>
using namespace std;

int main()
{
    long x;
    cin >> x;
    int check = x % 10;
    if(check != 0 && x > 0)
    {
        cout << x / 10 + 1 << endl;
    }
    else
    {
        cout << x / 10 << endl;
    }
}