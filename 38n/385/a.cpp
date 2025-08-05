#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    string ans = "No";
    if(a == b && b == c)
    {
        ans = "Yes";
    }
    if(a + b == c)
    {
        ans = "Yes";
    }
    if(a + c == b)
    {
        ans = "Yes";
    }
    if(b + c == a)
    {
        ans = "Yes";
    }
    cout << ans << endl;
}