#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool pre = false, post = false;
    string preT = t.substr(0, n);
    string postT = t.substr(m - n);
    if (preT == s)
        pre = true;
    if (postT == s)
        post = true;
    if (pre && post)
        cout << 0 << endl;
    else if (pre)
        cout << 1 << endl;
    else if (post)
        cout << 2 << endl;
    else
        cout << 3 << endl;
}