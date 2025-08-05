#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a < b&& a < c)
    a += 24;
    if(b > c)
    c += 24;
    if(b <= a && a <= c)
    cout << "No" << endl;
    else
    cout << "Yes" << endl;
}