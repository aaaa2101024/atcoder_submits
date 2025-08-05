#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        cout << s[i];
        if(i == n - 1) break;
        cout << ' ';
    }
    cout << endl;
}