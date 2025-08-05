#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,d;
    cin >> a >> b >> d;
    int n = abs(b - a) /d + 1;
    for(int i = 0;i < n;i++)
    {
        cout << a + d * i << ' ';
    }
    cout << endl;
}