#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    string ans = "No";
    if(s[n - 3] == 's' && s[n - 2] == 'a' && s[n - 1] == 'n')
    {
        ans = "Yes";
    }
    cout << ans << endl;
}