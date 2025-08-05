#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    string ans = "Yes";
    if(s[0] != '<')
    {
        ans = "No";
    }
    if(s[n - 1] != '>')
    {
        ans = "No";
    }
    for(int i = 1;i < n - 1;i++)
    {
        if(s[i] != '=')
        {
            ans = "No";
        }
    }
    cout << ans << endl;
}