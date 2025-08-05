#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int ss = 0,tt = 0;
    ss = abs((s[0] - '0') - (s[1] - '0'));
    tt = abs((t[0] - '0') - (t[1] - '0'));
    if(ss == 3)
    ss = 2;
    else if(ss == 4)
    ss = 1;
    if(tt == 3)
    tt = 2;
    else if(tt == 4)
    tt = 1;
    if (ss == tt)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}