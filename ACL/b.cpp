#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    bool flag = false;
    if(a <= c && c <= b)
    {
        flag = true;
    }
    if(c <= a && a <= d)
    {
        flag = true;
    }
    if(flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}